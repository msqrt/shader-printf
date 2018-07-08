
#include "window.h"

#include "shaderprintf.h"

int main() {

	setupGL(1280, 720, "printf test", false);
	
	GLuint vertex = createShader("vertex.glsl", GL_VERTEX_SHADER), fragment = createShader("fragment.glsl", GL_FRAGMENT_SHADER);
	GLuint program = glCreateProgram();

	glAttachShader(program, vertex);
	glAttachShader(program, fragment);
	glLinkProgram(program);


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

		glUseProgram(program);

		POINT mouse = getMouse();
		glUniform2i(glGetUniformLocation(program, "mouse"), mouse.x, mouse.y);

		// create a buffer to hold the printf results
		GLuint printBuffer = createPrintBuffer();
		// bind it to the current program
		bindPrintBuffer(program, printBuffer);

		// do any amount of draw/compute that appends to the buffer
		glDrawArrays(GL_TRIANGLES, 0, 3);
		
		// convert to string, output to console
		printf("\n\nGLSL print:\n%s\n", getPrintBufferString(printBuffer).c_str());
		// clean up
		deletePrintBuffer(printBuffer);

		swapBuffers();
	}

	
	glBindVertexArray(0);
	glDeleteVertexArrays(1, &vao);
	glDeleteShader(vertex); glDeleteShader(fragment);
	glDeleteProgram(program);

	closeGL();
}
