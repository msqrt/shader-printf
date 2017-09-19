
#include <windows.h>
#include <string>
#include <fstream>
#include <vector>

#include <gl/gl.h>
#include <loadgl/wglext.h>
#include <loadgl/glext.h>
#include <loadgl/loadgl45.h>

#pragma comment(lib, "opengl32.lib")

void setupGL(int, int, const std::string&, bool);
void closeGL();
GLuint createShader(const std::string&, GLenum);
GLuint addShaderInclude(const std::string&);

const int GL_WINDOW_ATTRIBUTES[] = {
	WGL_DRAW_TO_WINDOW_ARB, GL_TRUE,
	WGL_SUPPORT_OPENGL_ARB, GL_TRUE,
	WGL_DOUBLE_BUFFER_ARB, GL_TRUE,

	// 16-bit float backbuffer.
	WGL_PIXEL_TYPE_ARB, WGL_TYPE_RGBA_FLOAT_ARB,
	WGL_COLOR_BITS_ARB, 64,

	WGL_DEPTH_BITS_ARB, 24,
	WGL_STENCIL_BITS_ARB, 8,
0};

const int GL_CONTEXT_ATTRIBUTES[] = {
	WGL_CONTEXT_MAJOR_VERSION_ARB, 4,
	WGL_CONTEXT_MINOR_VERSION_ARB, 5,
	WGL_CONTEXT_PROFILE_MASK_ARB, WGL_CONTEXT_CORE_PROFILE_BIT_ARB,
	WGL_CONTEXT_FLAGS_ARB, WGL_CONTEXT_DEBUG_BIT_ARB,
0};

HWND wnd;
HDC dc;
HGLRC rc;

int main() {

	setupGL(1280, 720, "printf test", false);
	
	GLuint vertex = createShader("vertex.glsl", GL_VERTEX_SHADER), fragment = createShader("fragment.glsl", GL_FRAGMENT_SHADER);
	GLuint program = glCreateProgram();
	glAttachShader(program, vertex);
	glAttachShader(program, fragment);
	glLinkProgram(program);

	std::vector<unsigned>printfData(16 * 1024 * 1024);

	GLuint printfBuffer;
	glCreateBuffers(1, &printfBuffer);
	glNamedBufferData(printfBuffer, printfData.size() * sizeof(unsigned), nullptr, GL_STREAM_READ);
	glBindBuffer(GL_SHADER_STORAGE_BUFFER, printfBuffer);
	glBindBuffer(GL_SHADER_STORAGE_BUFFER, 0);

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	bool loop = true;
	while (loop) {

		MSG msg;

		while (PeekMessage(&msg, 0, 0, 0, PM_REMOVE)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
			if (msg.message == WM_QUIT)
				loop = false;
		}

		glClearColor(.0f, .0f, .0f, .0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		POINT mouse;
		GetCursorPos(&mouse);
		ScreenToClient(wnd, &mouse);

		glUseProgram(program);
		unsigned size = 1u;
		glUniform2i(glGetUniformLocation(program, "mouse"), mouse.x, mouse.y);
		glNamedBufferSubData(printfBuffer, 0, sizeof(unsigned), &size);
		glBindBufferBase(GL_SHADER_STORAGE_BUFFER, glGetProgramResourceIndex(program, GL_SHADER_STORAGE_BLOCK, "printfBuffer"), printfBuffer);
		glDrawArrays(GL_TRIANGLES, 0, 3);
		glGetNamedBufferSubData(printfBuffer, 0, printfData.size()*sizeof(unsigned), printfData.data());

		for (int i = 1; i < printfData[0]; ++i) {
			if (printfData[i] == '%')
				if (printfData[i + 1] == '%') {
					printf("%%");
					i++;
				}
				else {
					int vecSize = 1;
					std::string format;
					while (std::string(1, printfData[i]).find_first_of("eEfFgGdiuoxXaA") == std::string::npos) {
						if (printfData[i] == '^') {
							vecSize = printfData[i + 1] - '0';
							i += 2;
						}
						else {
							format = format + std::string(1, printfData[i]);
							i++;
						}
					}
					format += printfData[i];
					bool is_float = std::string(1, printfData[i]).find_first_of("diuoxX") == std::string::npos;
					//printf("[");
					//for (int j = 0; j < format.size(); ++j)
					//	printf("%c", format[j]);
					//printf("]");

					if (vecSize > 1) printf("(");

					for (int j = 0; j < vecSize; ++j) {
						i++;
						if(is_float)
							printf(format.c_str(), *((float*)&printfData[i]));
						else
							printf(format.c_str(), printfData[i]);
						if (vecSize > 1 && j < vecSize - 1) printf(", ");
					}
					if (vecSize > 1) printf(")");
				}
			else
				printf("%c", printfData[i]);
		}
		printf("\n");

		SwapBuffers(dc);
	}

	closeGL();
}


LRESULT CALLBACK wndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (uMsg == WM_CLOSE || uMsg == WM_KEYDOWN && wParam == VK_ESCAPE)
		PostQuitMessage(0);

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

void APIENTRY glDebugCallback(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * message, void *) {

	auto output = std::string("GLDEBUG: OpenGL ");

	switch (type) {
	case GL_DEBUG_TYPE_ERROR:					output += "error";							break;
	case GL_DEBUG_TYPE_PORTABILITY:				output += "portability issue";				break;
	case GL_DEBUG_TYPE_PERFORMANCE:				output += "performance issue";				break;
	case GL_DEBUG_TYPE_OTHER:					output += "issue";							break;
	case GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR:		output += "undefined behavior";				break;
	case GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR:		output += "deprecated behavior";			break;
	default:									output += "unknown issue";					break;
	}
	switch (source) {
	case GL_DEBUG_SOURCE_API:																break;
	case GL_DEBUG_SOURCE_WINDOW_SYSTEM:			output += " in the window system";			break;
	case GL_DEBUG_SOURCE_SHADER_COMPILER:		output += " in the shader compiler";		break;
	case GL_DEBUG_SOURCE_THIRD_PARTY:			output += " in third party code";			break;
	case GL_DEBUG_SOURCE_APPLICATION:			output += " in this program";				break;
	case GL_DEBUG_SOURCE_OTHER:					output += " in an undefined source";		break;
	default:									output += " nowhere(?)";					break;
	}

	output += ", id " + std::to_string(id) + ":\n";
	output += std::string(message, length);

	printf("%s\n", output.c_str());
	if (type == GL_DEBUG_TYPE_ERROR)
		_CrtDbgBreak();
}

void setupGL(int width, int height, const std::string& title, bool fullscreen) {
	
	WNDCLASSEX windowClass = {0};
	windowClass.cbSize = sizeof(windowClass);
	windowClass.hInstance = GetModuleHandle(nullptr);
	windowClass.lpszClassName = "classy class";
	windowClass.hCursor = LoadCursor(nullptr, IDC_ARROW);
	windowClass.style = CS_OWNDC;
	windowClass.lpfnWndProc = wndProc;
	RegisterClassEx(&windowClass);

	PIXELFORMATDESCRIPTOR formatDesc = { 0 };
	formatDesc.nVersion = 1;
	formatDesc.nSize = sizeof(formatDesc);
	formatDesc.dwFlags = PFD_DOUBLEBUFFER | PFD_SUPPORT_OPENGL | PFD_DRAW_TO_WINDOW;
	formatDesc.iLayerType = PFD_MAIN_PLANE;
	formatDesc.iPixelType = PFD_TYPE_RGBA;
	formatDesc.cColorBits = 32;
	formatDesc.cDepthBits = 24;
	formatDesc.cStencilBits = 8;

	// create a temporary window to have a functional opengl context in order to get some extension function pointers
	HWND tempWnd = CreateWindow("classy class", "windy window", WS_POPUP, 0, 0, width, height, nullptr, nullptr, GetModuleHandle(nullptr), nullptr);
	HDC tempDC = GetDC(tempWnd);
	SetPixelFormat(tempDC, ChoosePixelFormat(tempDC, &formatDesc), &formatDesc);
	HGLRC tempRC = wglCreateContext(tempDC);
	wglMakeCurrent(tempDC, tempRC);

	// these are why we made the temporary context; can choose more pixel formats (multisample, floating point etc.) and create debug/core/etc contexts
	auto wglChoosePixelFormat = (PFNWGLCHOOSEPIXELFORMATARBPROC)wglGetProcAddress("wglChoosePixelFormatARB");
	auto wglCreateContextAttribs = (PFNWGLCREATECONTEXTATTRIBSARBPROC)wglGetProcAddress("wglCreateContextAttribsARB");

	// adjust the window borders away, center the window
	RECT area = {0, 0, width, height};
	DWORD style = (fullscreen ? WS_POPUP : WS_SYSMENU) | WS_VISIBLE;
	if (fullscreen) {
		DEVMODE mode = { 0 };
		mode.dmSize = sizeof(mode);
		mode.dmFields = DM_PELSWIDTH | DM_PELSHEIGHT | DM_BITSPERPEL;
		mode.dmPelsWidth = width; mode.dmPelsHeight = height;
		mode.dmBitsPerPel = 32;
		ChangeDisplaySettings(&mode, CDS_FULLSCREEN);
	}

	AdjustWindowRect(&area, style, false);
	int adjustedWidth = fullscreen ? width : area.right - area.left, adjustedHeight = fullscreen ? height : area.bottom - area.top;
	int centerX = (GetSystemMetrics(SM_CXSCREEN) - adjustedWidth) / 2, centerY = (GetSystemMetrics(SM_CYSCREEN) - adjustedHeight) / 2;
	if (fullscreen)
		centerX = centerY = 0;

	// create the final window and context
	dc = GetDC(wnd = CreateWindow("classy class", title.c_str(), style, centerX, centerY, adjustedWidth, adjustedHeight, nullptr, nullptr, GetModuleHandle(nullptr), nullptr));
	
	int format; UINT numFormats;
	wglChoosePixelFormat(dc, GL_WINDOW_ATTRIBUTES, nullptr, 1, &format, &numFormats);

	SetPixelFormat(dc, format, &formatDesc);

	rc = wglCreateContextAttribs(dc, 0, GL_CONTEXT_ATTRIBUTES);

	wglMakeCurrent(dc, rc);
	glViewport(0, 0, width, height);

	// release the temporary window and context
	wglDeleteContext(tempRC);
	ReleaseDC(tempWnd, tempDC);
	DestroyWindow(tempWnd);

	// what GL did we get?
	printf("gl  %s\non  %s\nby  %s\nsl  %s\n", glGetString(GL_VERSION), glGetString(GL_RENDERER), glGetString(GL_VENDOR), glGetString(GL_SHADING_LANGUAGE_VERSION));

	loadgl();

	// enable the debug output
	glEnable(GL_DEBUG_OUTPUT);
	// debug output from main thread: step-by-step debug from the correct stack frame when breaking
	glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS);

	glDebugMessageCallback((GLDEBUGPROC)glDebugCallback, 0);

	// query everything about errors, deprecated and undefined things
	glDebugMessageControl(GL_DONT_CARE, GL_DEBUG_TYPE_ERROR, GL_DONT_CARE, 0, 0, GL_TRUE);
	glDebugMessageControl(GL_DONT_CARE, GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR, GL_DONT_CARE, 0, 0, GL_TRUE);
	glDebugMessageControl(GL_DONT_CARE, GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR, GL_DONT_CARE, 0, 0, GL_TRUE);

	// disable misc info. might want to check these from time to time!
	glDebugMessageControl(GL_DONT_CARE, GL_DEBUG_TYPE_OTHER, GL_DONT_CARE, 0, 0, GL_FALSE);
	glDebugMessageControl(GL_DONT_CARE, GL_DEBUG_TYPE_PERFORMANCE, GL_DONT_CARE, 0, 0, GL_FALSE);
}

void closeGL() {
	// release context, window
	ChangeDisplaySettings(nullptr, CDS_FULLSCREEN);
	wglMakeCurrent(0, 0);
	wglDeleteContext(rc);
	ReleaseDC(wnd, dc);
	DestroyWindow(wnd);
	UnregisterClass("classy class", GetModuleHandle(nullptr));
}

GLuint createShader(const std::string& path, GLenum shaderType) {
	using namespace std;
	string source = string(istreambuf_iterator<char>(ifstream(path)), istreambuf_iterator<char>());

	// insert our buffer definition after the glsl version define
	size_t version = source.find("#version");
	size_t lineAfterVersion = 2, bufferInsertOffset = 0;

	if (version != string::npos) {
		++bufferInsertOffset;
		for (size_t i = 0; i < version; ++i)
			if (source[i] == '\n')
				++lineAfterVersion;
		for (size_t i = version; i < source.length(); ++i)
			if (source[i] == '\n')
				break;
			else
				bufferInsertOffset += 1;
	}
	printf("%s", source.c_str());

	size_t printfLoc = source.find("printf(");
	while (printfLoc != string::npos) {
		size_t printfEndLoc = printfLoc;

		int parentheses = 0;
		bool inString = false;
		vector<string> args;
		while (true) {
			
			printfEndLoc++;

			if (!inString && parentheses == 1 && source[printfEndLoc] == ',') {
				std::string arg;

				size_t argLoc = printfEndLoc + 1;
				int argParentheses = 0;
				while (argParentheses > 0 || source[argLoc] != ','){
					if (source[argLoc] == '(') ++argParentheses;
					if (source[argLoc] == ')') --argParentheses;
					if (argParentheses < 0) break;
					if (source[argLoc] != ' ')
						arg = arg + string(1, source[argLoc]);
					++argLoc;
				}
				args.emplace_back(arg);
			}

			if (source[printfEndLoc] == '"')
				inString = !inString;
			if (!inString && source[printfEndLoc] == '(')
				parentheses++;
			if (!inString && source[printfEndLoc] == ')') {
				parentheses--;
				if (!parentheses) {
					do { printfEndLoc++; } while (source[printfEndLoc] != ';');
					break;
				}
			}
		}

		int ii = 0;
		for (auto& a : args) {
			for (int i = 0; i < a.length(); ++i)
				if (a[i] == ' ')
					a = a.substr(0, i) + a.substr(i + 2);
			printf("#%d: %s\n", ii, a.c_str());
			++ii;
		}

		std::string replacement = "";
		size_t argumentIndex = 0, writeSize = 0;
		inString = false;
		for (size_t i = printfLoc; i < printfEndLoc; ++i) {

			if (source[i] == '"')
				inString = !inString;
			if (inString && source[i] == '\\') {
				char ch = '\\';
				switch (source[i + 1]) {
				case '\'': ch = '\''; break;
				case '\"': ch = '\"'; break;
				case '?': ch = '\?'; break;
				case '\\': ch = '\\'; break;
				case 'a': ch = '\a'; break;
				case 'b': ch = '\b'; break;
				case 'f': ch = '\f'; break;
				case 'n': ch = '\n'; break;
				case 'r': ch = '\r'; break;
				case 't': ch = '\t'; break;
				case 'v': ch = '\v'; break;
				default: ch = ' ';
				}
				replacement += "printfData[printfIndex++]=" + std::to_string(ch) + ";";
				writeSize++;
				i++;
			}
			else if (inString && source[i] != '"') {
				replacement += "printfData[printfIndex++]=" + std::to_string(unsigned(source[i])) + ";";
				writeSize++;
			}
			if (inString && source[i] == '%')
				if (source[i + 1] == '%') {
					i++;
					replacement += "printfData[printfIndex++]=" + std::to_string(unsigned(source[i])) + ";";
					writeSize++;
				}
				else {
					int vecSize = 1;
					while (string(1, source[i]).find_first_of("eEfFgGdiuoxXaA") == string::npos) {
						if (source[i] == '^')
							vecSize = source[i + 1] - '0';
						i++;
						replacement += "printfData[printfIndex++]=" + std::to_string(unsigned(source[i])) + ";";
						writeSize++;
					}

					for (int j = 0; j < vecSize; ++j) {
						std::string arg = args[argumentIndex];
						if (vecSize > 1)
							arg = "(" + arg + ")." + string("xyzw")[j];
						switch (source[i]) {
						case 'e': case 'E': case 'f': case 'F': case 'g': case 'G': case 'x': case 'X':
							replacement += "printfData[printfIndex++]=floatBitsToUint(" + arg + ");"; break;
						default:
							replacement += "printfData[printfIndex++]=" + arg + ";"; break;
						}
						writeSize++;
					}
					argumentIndex++;
				}
		}

		source = source.substr(0, printfLoc) + "if(printfWriter){" + "uint printfIndex=atomicAdd(printfData[0]," + std::to_string(writeSize) + "u);" + replacement + "}" + source.substr(printfEndLoc + 1);

		printfLoc = source.find("printf(");
	}

	source = source.substr(0, bufferInsertOffset) + "\nbuffer printfBuffer{uint printfData[];};bool printfWriter = false;void enablePrintf(){printfWriter=true;}void disablePrintf(){printfWriter=false;}\n#line " + std::to_string(lineAfterVersion) + "\n" + source.substr(bufferInsertOffset);

	printf("modified:\n%s", source.c_str());

	GLuint shader = glCreateShader(shaderType);

	auto ptr = (const GLchar*)source.c_str();

	glShaderSource(shader, 1, &ptr, nullptr);
	glCompileShader(shader);
	int success; glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
	if (!success) {
		int length; glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &length);
		string log(length + 1, '\0');
		glGetShaderInfoLog(shader, length + 1, &length, &log[0]);
		printf("log of compiling %s:\n%s\n", path.c_str(), log.c_str());
		return 0;
	}
	return shader;
}

GLuint addShaderInclude(const std::string& path) {
	using namespace std;
	auto name = path;
	auto lastInd = name.find_last_of("\\/");
	if (lastInd != string::npos)
		name = name.substr(lastInd);
	name = "/" + name;
	string source = string(istreambuf_iterator<char>(ifstream(path)), istreambuf_iterator<char>());
	glNamedString(GL_SHADER_INCLUDE_ARB, -1, name.c_str(), -1, source.c_str());

	return 0;
}
