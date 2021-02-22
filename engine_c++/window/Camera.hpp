//
//  Camera.hpp
//  engine_c++
//
//  Created by Виталий Гапаньков on 06.10.2020.
//

#ifndef Camera_hpp
#define Camera_hpp

#include <stdio.h>
#include <glm/glm.hpp>
using namespace glm;

class Camera {
    void updateVectors();
public:
    vec3 front;
    vec3 up;
    vec3 right;

    vec3 position;
    float fov;
    mat4 rotation;
    Camera(vec3 position, float fov);

    void rotate(float x, float y, float z);

    mat4 getProjection();
    mat4 getView();
};
#endif /* Camera_hpp */
