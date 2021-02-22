//
//  png_loading.hpp
//  engine_c++
//
//  Created by Виталий Гапаньков on 06.10.2020.
//

#ifndef png_loading_hpp
#define png_loading_hpp

#include <stdio.h>
#include <string>

class Texture;

extern Texture* load_texture(std::string filename);

#endif /* png_loading_hpp */
