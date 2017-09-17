
#include <string>
#include <iostream>
#include <cctype>
#include <fstream>
#include <sstream>
#include <locale>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_set>

int main(int argc, char* argv[]) {

	if (argc < 2) {
		std::cout << "usage: parseglexth version [ext ext ext ...]" << std::endl
			<< "\"version\" is the desired OpenGL version number." << std::endl
			<< "all of the specified extensions will also be loaded." << std::endl;
		system("pause");
		return -1;
	}

	std::string maxver_str = std::string(argv[1]);
	maxver_str.erase(std::remove(maxver_str.begin(), maxver_str.end(), '.'), maxver_str.end());

	int maxver = std::atoi(maxver_str.c_str());

	std::vector<std::string> extensions;
	for (int i = 2; i < argc; ++i)
		extensions.push_back(argv[i]);

	std::ifstream glext("glext.h");
	std::stringstream define;
	std::stringstream declare;
	std::stringstream load;
	std::stringstream load_check;
	std::stringstream load_debug;
	load << "int loadgl() {" << std::endl;
	load_check << "\t" << "if(" << std::endl;
	load_debug << "int loadgl() {" << std::endl << "\t" << "int result = 0;" << std::endl;

	std::string line;

	std::locale loc;

	std::set<std::string> funcnames;

	while (std::getline(glext, line)) {
		int start_parse = 0;
		std::string cur_version = "";
		if (std::string::npos != line.find("#ifndef GL_VERSION_")) {
			int major = std::stoi(line.substr(line.rfind("_") - 1, 1)),
				minor = std::stoi(line.substr(line.rfind("_") + 1, 1));

			if (major * 10 + minor <= maxver)
				start_parse = 1;
			cur_version = "core version " + std::to_string(major) + "." + std::to_string(minor);

		}

		for (std::string& str : extensions)
			if (std::string::npos != line.find("#ifndef GL_ARB_" + str) || std::string::npos != line.find("#ifndef GL_EXT_" + str) || std::string::npos != line.find("#ifndef GL_KHR_" + str) || std::string::npos != line.find("#ifndef GL_AMD_" + str)) {
				cur_version = "extension " + str;
				start_parse = 2;
			}

		if (start_parse) {
			std::cout << "loading " << cur_version << std::endl;
			int inside = 0;
			while (std::getline(glext, line) && inside >= 0) {
				if (std::string::npos != line.find("#endif"))
					--inside;
				if (std::string::npos != line.find("#if"))
					++inside;
				if (std::string::npos != line.find("#ifdef GL_GLEXT_PROTOTYPES")) {

					while (std::getline(glext, line) && std::string::npos == line.find("#endif")) {
						int firstpos = line.find("APIENTRY ") + std::string("APIENTRY ").length();
						int lastpos = line.find("(") - firstpos;
						std::string func = line.substr(firstpos, lastpos);
						std::string stripfunc = func;

						if (func.find("ARB") != std::string::npos)
							stripfunc = func.substr(0, func.find("ARB"));

						if (func.find("EXT") != std::string::npos)
							stripfunc = func.substr(0, func.find("EXT"));

						if (func.find("KHR") != std::string::npos)
							stripfunc = func.substr(0, func.find("KHR"));

						if (func.find("AMD") != std::string::npos)
							stripfunc = func.substr(0, func.find("AMD"));

						if (func.find("NV") != std::string::npos)
							stripfunc = func.substr(0, func.find("NV"));

						if (funcnames.count(stripfunc) == 0) {
							funcnames.insert(stripfunc);

							std::string proc = func;
							for (char& c : proc)
								c = std::toupper(c, loc);

							proc = "PFN" + proc + "PROC";

							define << "extern " << proc << " " << stripfunc << ";" << std::endl;
							//extern PFNGLBLENDCOLORPROC glBlendColor;
							declare << proc << " " << stripfunc << ";" << std::endl;
							//PFNGLBLENDCOLORPROC glBlendColor;
							load << "\t" << stripfunc << " = (" << proc << ")wglGetProcAddress(\"" << func << "\");" << std::endl;
							//glBlendColor = (PFNGLBLENDCOLORPROC)wglGetProcAddress("glBlendColor");
							load_check << "\t\t\t" << stripfunc << " == nullptr ||" << std::endl;
							load_debug << "\t" << stripfunc << " = (" << proc << ")wglGetProcAddress(\"" << func << "\");" << std::endl;
							load_debug << "\tif(!" << stripfunc << ") { MessageBox(0, \"Couldn't load OpenGL " + cur_version + ", function \\\"" + func + "\\\" is missing.\", \"OpenGL function missing\" , MB_OK); result = -1; }" << std::endl << std::endl;
						}
					}
					--inside;
				}
			}
		}
	}
	load_check << "\t\t\t" << "false ) {" << std::endl << "\t\tMessageBox(0, \"Couldn't load OpenGL " + std::to_string(maxver / 10) + "." + std::to_string(maxver % 10);
	if (extensions.size() > 0) {
		if (extensions.size() > 1)
			load_check << ", ";
		else
			load_check << " and ";
		for (unsigned int i = 0; i < extensions.size(); ++i) {
			load_check << extensions[i];
			if (extensions.size()>1 && i<extensions.size() - 1)
				if (i == extensions.size() - 2)
					load_check << " and ";
				else
					load_check << ", ";
		}
	}
	load_check << "!\", \"OpenGL function missing\" , MB_OK); " << std::endl << " \t\treturn -1;" << std::endl << "\t" << "}" << std::endl;

	while (std::getline(load_check, line))
		load << line << std::endl;

	load << "\t" << "return 0; " << std::endl << "}" << std::endl;
	load_debug << "\t" << "return result; " << std::endl << "}" << std::endl;

	std::ofstream cpp("loadgl" + std::to_string(maxver) + ".cpp");
	std::ofstream header("loadgl" + std::to_string(maxver) + ".h");
	header << "#pragma once" << std::endl << "int loadgl();" << std::endl;
	while (std::getline(define, line))
		header << line << std::endl;
	cpp << "#include <Windows.h>" << std::endl;
	cpp << "#include <gl/gl.h>" << std::endl;
	cpp << "#include \"glext.h\"" << std::endl;
	cpp << "#include \"loadgl" + std::to_string(maxver) + ".h\"" << std::endl;
	while (std::getline(declare, line))
		cpp << line << std::endl;
	cpp << "#ifdef _DEBUG" << std::endl;
	while (std::getline(load_debug, line))
		cpp << line << std::endl;
	cpp << "#else" << std::endl;
	while (std::getline(load, line))
		cpp << line << std::endl;
	cpp << "#endif" << std::endl;

	return 0;
}