//
//  VoxelRenderer.hpp
//  engine_c++
//
//  Created by Виталий Гапаньков on 08.10.2020.
//

#ifndef VoxelRenderer_hpp
#define VoxelRenderer_hpp

#include <stdio.h>
#include <stdlib.h>

class Mesh;
class Chunk;

class VoxelRenderer {
    float* buffer;
    size_t capacity;
public:
    VoxelRenderer(size_t capacity);
    ~VoxelRenderer();

    Mesh* render(Chunk* chunk, const Chunk** chunks, bool ambientOcclusion);
};

#endif /* VoxelRenderer_hpp */
