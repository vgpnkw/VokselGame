//
//  Texture.hpp
//  engine_c++
//
//  Created by Виталий Гапаньков on 06.10.2020.
//

#ifndef Texture_hpp
#define Texture_hpp

#include <stdio.h>
#include <string>

class Texture {
public:
    unsigned int id;
    int width;
    int height;
    Texture(unsigned int id, int width, int height);
    ~Texture();

    void bind();
};

extern Texture* load_texture(std::string filename);

#endif /* Texture_hpp */
