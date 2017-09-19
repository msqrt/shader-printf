# shader-printf
Simple printf functionality for GLSL.

This library is a simple proof of concept of using printf directly from a shader. The main point of being able to do this is to ease the debugging of complicated shader programs. This is invaluable for example when it's essential to see the evolution of the value of a variable in a loop and simply outputting the final value will not give enough information of how the program works.

Currently the library is a single header file, shaderprintf.h. This file contains a function called glShaderSourcePrint that simply acts as a replacement for glShaderSource for any shaders where the printing functionality is desired. It also contains a final parser called getPrintBufferString that returns all of the printed content as a C++ std::string. In addition to these two it contains helpers to create, bind and delete a necessary temporary buffer that should be somewhat simple to understand by looking at the example main loop in main.cpp.

The example program should work directly from the repository with Visual Studio, select shader-printf as the startup project and run. Everything here is written in VS2017 but at least VS2015 should be fine as well.

The repository also comes with a minimal OpenGL extension handler/windowing system that's aimed at targeting a single core version with all of the nice debug features that modern OpenGL comes with. It's probably not much of use as is but it's a nice reference and you might find features you didn't know about.
