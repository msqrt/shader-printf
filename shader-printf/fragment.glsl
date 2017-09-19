
#version 450

uniform ivec2 mouse;

float sdf(vec3 p) {
	return length(mod(p, vec3(2.0))-vec3(1.0))-.2;
}

out vec4 color;
void main() {
	if(ivec2(gl_FragCoord.xy)==mouse)
		enablePrintf();

	vec3 position = vec3(.0, .0, -10.0);
	vec3 direction = normalize(vec3(gl_FragCoord.xy/vec2(1280.0)-vec2(.5, .5*720.0/1280.0), .6));

	printf("hello from \"pixel\" %^2u! starting raymarch with position %^3g and direction %^3g...\n", mouse, position, direction);

	float eval = sdf(position);
	float dist = eval;
	int k = 0;

	while(eval > .01*dist && k<80) {
		printf("iteration %d, eval %g\n", k, eval);
		position += direction * eval;
		dist += eval;
		eval = sdf(position);
		++k;
	}

	color = vec4(exp(-dist*.01), .5, .5, .0);
	if(printfWriter)
		color = vec4(1.0,.0,.0,1.0);
}
