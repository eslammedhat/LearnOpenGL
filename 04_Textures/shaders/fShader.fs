#version 330 core

out vec4 FragColor;  
in  vec3 ourColor;
in  vec2 ourTex;

uniform sampler2D texture1;
uniform sampler2D texture2;
uniform float mixFactor;

void main()
{
//	FragColor = vec4(ourColor, 1.0);
//	FragColor = texture(ourTexture, ourTex);
	FragColor = mix(texture(texture1, ourTex), texture(texture2, vec2(-ourTex.s, ourTex.t)), mixFactor);
}