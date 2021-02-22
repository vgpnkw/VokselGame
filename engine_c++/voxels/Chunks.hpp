//
//  Chunks.hpp
//  engine_c++
//
//  Created by Виталий Гапаньков on 08.10.2020.
//

#ifndef Chunks_hpp
#define Chunks_hpp

#include <stdio.h>
#include <stdlib.h>
#include <glm/glm.hpp>

using namespace glm;

class Chunk;
class voxel;

class Chunks {
public:
    Chunk** chunks;
    size_t volume;
    unsigned int w,h,d;

    Chunks(int w, int h, int d);
    ~Chunks();

    Chunk* getChunk(int x, int y, int z);
    voxel* get(int x, int y, int z);
    void set(int x, int y, int z, int id);
    voxel* rayCast(vec3 start, vec3 dir, float maxLength, vec3& end, vec3& norm, vec3& iend);

    void write(unsigned char* dest);
    void read(unsigned char* source);
};

#endif /* Chunks_hpp */
