//
//  LineBatch.hpp
//  engine_c++
//
//  Created by Виталий Гапаньков on 08.10.2020.
//

#ifndef LineBatch_hpp
#define LineBatch_hpp

#include <stdio.h>
#include <stdlib.h>

class Mesh;

class LineBatch {
    Mesh* mesh;
    float* buffer;
    size_t index;
    size_t capacity;
public:
    LineBatch(size_t capacity);
    ~LineBatch();

    void line(float x1, float y1, float z1, float x2, float y2, float z2,
            float r, float g, float b, float a);
    void box(float x, float y, float z, float w, float h, float d,
            float r, float g, float b, float a);

    void render();
};

#endif /* LineBatch_hpp */
