//
//  Window.hpp
//  engine_c++
//
//  Created by Виталий Гапаньков on 05.10.2020.
//

#ifndef Window_hpp
#define Window_hpp

#include <OpenGL/OpenGL.h>
class GLFWwindow;

class Window {
public:
    static int width;
    static int height;
    static GLFWwindow* window;
    static int initialize(int width, int height, const char* title);
    static void terminate();

    static void setCursorMode(int mode);
    static bool isShouldClose();
    static void setShouldClose(bool flag);
    static void swapBuffers();
};

#endif /* Window_hpp */


