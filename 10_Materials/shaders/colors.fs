#version 330 core

in vec3 Normal;  
in vec3 FragPos;  

out vec4 FragColor;
  
uniform vec3 objectColor;
uniform vec3 lightColor;
uniform vec3 lightPos;  
uniform vec3 viewPos;



#version 330 core
struct Material {
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
    float shininess;
}; 
  
uniform Material material;



void main()
{
    float ambientStrength = 0.1;
    float specularStrength = 0.5;

    // ambian
    vec3 ambient = ambientStrength * lightColor;

    // deffuse 
    vec3 norm = normalize(Normal);
    vec3 lightDir = normalize(lightPos - FragPos); 
    float diff = max(dot(norm, lightDir), 0.0);
    vec3 diffuse = diff * lightColor;
    
    // specular
    vec3 viewDir = normalize(viewPos - FragPos);
    vec3 reflectDir = reflect(-lightDir, norm);  
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), 32);
    vec3 specular = specularStrength * spec * lightColor;  
    
    
//    vec3 result = (ambient + diffuse) * objectColor;
    vec3 result = (ambient + diffuse + specular) * objectColor;

    FragColor = vec4(result, 1.0);
}