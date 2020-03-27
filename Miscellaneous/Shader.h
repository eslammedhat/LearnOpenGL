/*
 * Shader.h
 *
 *  Created on: Mar 14, 2020
 *      Author: eslammedhat
 */

#ifndef SHADER_H_
#define SHADER_H_

#include <glad/glad.h> // include glad to get all the required OpenGL headers
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


class Shader {
public:
    // the program ID
    unsigned int ID;

    // constructor reads and builds the shader
    Shader(const char* vertexPath, const char* fragmentPath);
    ~Shader();
    // use/activate the shader
    void use();
    // utility uniform functions
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
};


#endif /* 03_SHADERS_SHADER_H_ */
