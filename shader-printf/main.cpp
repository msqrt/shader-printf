
#include "window.h"

#include "shaderprintf.h"

int main() {

	setupGL(1280, 720, "printf test", false);
	
	GLuint vertex = createShader("vertex.glsl", GL_VERTEX_SHADER), fragment = createShader("fragment.glsl", GL_FRAGMENT_SHADER);
	GLuint program = glCreateProgram();

	glAttachShader(program, vertex);
	glAttachShader(program, fragment);
	glLinkProgram(program);

	GLuint printBuffer = createPrintBuffer();

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

		bindPrintBuffer(program, printBuffer);

		POINT mouse = getMouse();
		glUniform2i(glGetUniformLocation(program, "mouse"), mouse.x, mouse.y);

		glDrawArrays(GL_TRIANGLES, 0, 3);
		
		printf("%s\n", getPrintBufferString(printBuffer).c_str());

		swapBuffers();
	}

	deletePrintBuffer(printBuffer);
	
	glBindVertexArray(0);
	glDeleteVertexArrays(1, &vao);
	glDeleteShader(vertex); glDeleteShader(fragment);
	glDeleteProgram(program);

	closeGL();
}
