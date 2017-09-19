
#pragma once

#include "Windows.h"

#include <string>
#include <fstream>

#include <gl/gl.h>
#include <loadgl/wglext.h>
#include <loadgl/glext.h>
#include <loadgl/loadgl45.h>


void setupGL(int, int, const std::string&, bool);
void closeGL();
GLuint createShader(const std::string&, GLenum);
void swapBuffers();

POINT getMouse();
