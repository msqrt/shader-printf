Simple printf functionality for GLSL.

This library is a simple proof of concept of using printf directly from a shader. The main point of being able to do this is to ease the debugging of complicated shader programs. This is invaluable for example when it's essential to see the evolution of the value of a variable in a loop and simply outputting the final value will not give enough information of how the program works.

Currently the library is a single header file, shaderprintf.h. This file contains a function called glShaderSourcePrint that simply acts as a replacement for glShaderSource for any shaders where the printing functionality is desired. It also contains a final parser called getPrintBufferString that returns all of the printed content as a C++ std::string. In addition to these two it contains helpers to create, bind and delete a necessary temporary buffer that should be somewhat simple to understand by looking at the example main loop in main.cpp.

Note that on the GLSL side you need to call enablePrintf() before calling printf. This is simply because most of the time you'll have thousands of threads and no interest in seeing the values for all of them; instead you most often want to enable the prints for a certain small-ish subset (like a region on the screen or certain problematic vertices) so you don't need to do if("I should be writing") printf(...) all the time. There's also a corresponding disablePrintf() function -- these just set a hidden boolean variable to true or false and each printf tests against it.

Also note that GLSL doesn't support characters, strings or pointers so %c, %s and %p are out. As is %n since there's no dynamic memory handling anyway.

Due to the native vector types of GLSL, the format specifier definition of printf is enhanced to contain dimensionality and is as follows : %[flags][width][.precision][length][^dimensions]specifier. dimensions is a number between 1 and 4. All elements will be printed with the same format specifier (which matches the standard if we omit the [^dimensions] part), surrounded by parentheses and separated with commas and spaces. They're written in the order xyzw and a subset can be printed (i.e. printf("%.1^3f", vec4(1.0)); is completely legal and will print "(1.0, 1.0, 1.0)")

The example program should work directly from the repository with Visual Studio, select shader-printf as the startup project and run. Everything here is written in VS2017 but at least VS2015 should be fine as well.

The repository also comes with a minimal OpenGL extension handler/windowing system that's aimed at targeting a single core version with all of the nice debug features that modern OpenGL comes with. It's probably not much of use as is but it's a nice reference and you might find features you didn't know about.
