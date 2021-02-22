//
//  Texture.cpp
//  engine_c++
//
//  Created by Виталий Гапаньков on 06.10.2020.
//

#include "Texture.hpp"
#include <GL/glew.h>

Texture::Texture(unsigned int id, int width, int height) : id(id), width(width), height(height) {
}

Texture::~Texture() {
    glDeleteTextures(1, &id);
}

void Texture::bind(){
    glBindTexture(GL_TEXTURE_2D, id);
}
