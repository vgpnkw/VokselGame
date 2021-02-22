//
//  files.hpp
//  engine_c++
//
//  Created by Виталий Гапаньков on 08.10.2020.
//

#ifndef files_hpp
#define files_hpp

#include <stdio.h>
#include <string>

extern bool write_binary_file(std::string filename, const char* data, size_t size);
extern bool read_binary_file(std::string filename, char* data, size_t size);

#endif /* files_hpp */
