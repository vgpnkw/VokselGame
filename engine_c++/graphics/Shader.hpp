//
//  Shader.hpp
//  engine_c++
//
//  Created by Виталий Гапаньков on 06.10.2020.
//

#ifndef Shader_hpp
#define Shader_hpp

#include <stdio.h>
#include <string>
#include <string.h>
#include <glm/glm.hpp>

class Shader {
public:
    unsigned int id;

    Shader(unsigned int id);
    ~Shader();

    void use();
    void uniformMatrix(std::string name, glm::mat4 matrix);
};

extern Shader* load_shader(std::string vertexFile, std::string fragmentFile);

#endif /* Shader_hpp */
