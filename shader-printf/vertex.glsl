
#version 450

out vec4 color;
void main() {
	enablePrintf();
	printf("hello from vertex %d!\n", gl_VertexID);
	gl_Position = vec4(-1.0 + (gl_VertexID == 1 ? 4.0 : .0), -1.0 + (gl_VertexID == 2 ? 4.0 : .0), .0, 1.0 );
}
