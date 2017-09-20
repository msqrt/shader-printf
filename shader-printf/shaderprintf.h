
// MIT License
//
// Copyright(c) 2017 Pauli Kemppinen
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

#include <string>
#include <vector>

#define GL_MAX_PRINT_BUFFER_SIZE (16*1024*1024)

inline GLuint createPrintBuffer() {
	GLuint printBuffer;
	glCreateBuffers(1, &printBuffer);
	glNamedBufferData(printBuffer, GL_MAX_PRINT_BUFFER_SIZE * sizeof(unsigned), nullptr, GL_STREAM_READ);
	return printBuffer;
}

inline void deletePrintBuffer(GLuint printBuffer) {
	glDeleteBuffers(1, &printBuffer);
}

inline void bindPrintBuffer(GLuint program, GLuint outBuffer) {

	// reset the buffer; only first value relevant (writing position / size of output)
	unsigned beginIterator = 1u;
	glNamedBufferSubData(outBuffer, 0, sizeof(unsigned), &beginIterator);

	// bind to whatever slot we happened to get
	glBindBufferBase(GL_SHADER_STORAGE_BUFFER, glGetProgramResourceIndex(program, GL_SHADER_STORAGE_BLOCK, "printBuffer"), outBuffer);
}

inline std::string getPrintBufferString(GLuint outBuffer) {

	unsigned size;
	glGetNamedBufferSubData(outBuffer, 0, sizeof(unsigned), &size);

	if (size > GL_MAX_PRINT_BUFFER_SIZE)
		size = GL_MAX_PRINT_BUFFER_SIZE;

	std::vector<unsigned> printfData(size + 1);
	printfData[0] = size;

	glGetNamedBufferSubData(outBuffer, 0, GLsizei(printfData.size() * sizeof(unsigned)), printfData.data());

	std::string result;

	char intermediate[1024];

	for (size_t i = 1; i < printfData[0]; ++i) {
		if (printfData[i] == '%')
			if (printfData[i + 1] == '%') {
				result += "%";
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
				bool isFloatType = std::string(1, printfData[i]).find_first_of("diuoxX") == std::string::npos;

				if (vecSize > 1) result += "(";

				for (int j = 0; j < vecSize; ++j) {
					i++;
					if (isFloatType)
						snprintf(intermediate, 1024, format.c_str(), *((float*)&printfData[i]));
					else
						snprintf(intermediate, 1024, format.c_str(), printfData[i]);
					result += std::string(intermediate);
					if (vecSize > 1 && j < vecSize - 1) result += ", ";
				}

				if (vecSize > 1) result += ")";
			}
		else
			result += std::string(1, printfData[i]);
	}
	return result;
}

#include <cctype>

inline size_t findCall(const std::string& source, const std::string& function) {
	size_t tentative = source.find(function);
	
	if (tentative == std::string::npos)
		return std::string::npos;
	
	bool commentLong = false;
	bool commentRow = false;
	for (size_t i = 0; i < tentative; ++i) {
		if (source[i] == '/' && source[i + 1] == '*') commentLong = true;
		if (source[i] == '*' && source[i + 1] == '/') commentLong = false;
		if (source[i] == '/' && source[i + 1] == '/') commentRow = true;
		if (source[i] == '\n') commentRow = false;
	}
	size_t tentativeEnd = tentative + function.length();
	if (commentRow || commentLong || (tentative > 0 && !std::isspace(source[tentative - 1])) || tentativeEnd >= source.length() || !(std::isspace(source[tentativeEnd]) || source[tentativeEnd] == '(')) {
		size_t result = findCall(source.substr(tentative + 1), function);
		if (result == std::string::npos)
			return std::string::npos;
		else
			return tentative + 1 + result;
	}
	else
		return tentative;
}

// a preprocessor for shader source
inline std::string addPrintToSource(std::string source) {

	// get rid of comments beforehand
	std::string commentedSource = "";
	std::swap(source, commentedSource);

	bool commentLong = false;
	bool commentRow = false;
	bool inString = false;
	for (size_t i = 0; i < commentedSource.length(); ++i) {
		if (commentedSource[i] == '"' && (i==0||commentedSource[i-1]!='\\')) inString = !inString;
		if (!inString) {
			if (i < commentedSource.length() - 1 && commentedSource[i] == '/' && commentedSource[i + 1] == '*') { commentLong = true; i++; continue; }
			if (i < commentedSource.length() - 1 && commentedSource[i] == '*' && commentedSource[i + 1] == '/') { commentLong = false; i++; continue; }
			if (i < commentedSource.length() - 1 && commentedSource[i] == '/' && commentedSource[i + 1] == '/') { commentRow = true; i++; continue; }
			if (commentedSource[i] == '\n') commentRow = false;
		}
		if (!commentLong && !commentRow)
			source += std::string(1, commentedSource[i]);
	}

	// insert our buffer definition after the glsl version define
	size_t version = source.find("#version");
	size_t lineAfterVersion = 2, bufferInsertOffset = 0;

	if (version != std::string::npos) {
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

	// go through all printfs in the shader
	size_t printfLoc = findCall(source, "printf");
	while (printfLoc != std::string::npos) {

		size_t printfEndLoc = printfLoc;

		int parentheses = 0;
		bool inString = false;

		// gather the arguments
		std::vector<std::string> args;
		while (true) {

			printfEndLoc++;

			if (!inString && parentheses == 1 && source[printfEndLoc] == ',') {
				std::string arg;

				size_t argLoc = printfEndLoc + 1;
				int argParentheses = 0;
				while (argParentheses > 0 || source[argLoc] != ',') {
					if (source[argLoc] == '(') ++argParentheses;
					if (source[argLoc] == ')') --argParentheses;
					if (argParentheses < 0) break;
					if (source[argLoc] != ' ')
						arg = arg + std::string(1, source[argLoc]);
					++argLoc;
				}
				args.emplace_back(arg);
			}

			if (source[printfEndLoc] == '"')
				inString = !inString;
			if (source[printfEndLoc] == '\\')
				++printfEndLoc;
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

		// come up with a list of data insertions that match the printf call
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
				replacement += "printData[printIndex++]=" + std::to_string(ch) + ";";
				writeSize++;
				i++;
			}
			else if (inString && source[i] != '"') {
				replacement += "printData[printIndex++]=" + std::to_string(unsigned(source[i])) + ";";
				writeSize++;
			}
			if (inString && source[i] == '%')
				if (source[i + 1] == '%') {
					i++;
					replacement += "printData[printIndex++]=" + std::to_string(unsigned(source[i])) + ";";
					writeSize++;
				}
				else {
					int vecSize = 1;
					while (std::string(1, source[i]).find_first_of("eEfFgGdiuoxXaA") == std::string::npos) {
						// a special feature to support vector prints
						if (source[i] == '^')
							vecSize = source[i + 1] - '0';
						i++;
						replacement += "printData[printIndex++]=" + std::to_string(unsigned(source[i])) + ";";
						writeSize++;
					}
					// store the actual data in the element after the format string
					for (int j = 0; j < vecSize; ++j) {
						std::string arg = args[argumentIndex];
						if (vecSize > 1)
							arg = "(" + arg + ")." + std::string("xyzw")[j];
						switch (source[i]) {
						case 'e': case 'E': case 'f': case 'F': case 'g': case 'G': case 'x': case 'X':
							replacement += "printData[printIndex++]=floatBitsToUint(" + arg + ");"; break;
						default:
							replacement += "printData[printIndex++]=" + arg + ";"; break;
						}
						writeSize++;
					}
					argumentIndex++;
				}
		}

		source = source.substr(0, printfLoc) + "if(printfWriter){" + "uint printIndex=min(atomicAdd(printData[0]," + std::to_string(writeSize) + "u),printData.length()-" + std::to_string(writeSize) + "u);" + replacement + "}" + source.substr(printfEndLoc + 1);

		printfLoc = findCall(source, "printf");
	}

	// insert the ssbo definition and some helper functions after the #version line
	return source.substr(0, bufferInsertOffset) + "\nbuffer printBuffer{uint printData[];};bool printfWriter = false;void enablePrintf(){printfWriter=true;}void disablePrintf(){printfWriter=false;}\n#line " + std::to_string(lineAfterVersion) + "\n" + source.substr(bufferInsertOffset);
}

inline void glShaderSourcePrint(GLuint shader, GLsizei count, const GLchar **string, const GLint *length) {
	std::string source;
	for (int i = 0; i < count; ++i) {
		if (!length || length[i] < 0)
			source += std::string(string[i]);
		else
			source += std::string(string[i], length[i]);
	}
	source = addPrintToSource(source);
	auto* finalString = source.c_str();
	glShaderSource(shader, 1, &finalString, nullptr);
}
