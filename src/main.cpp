#include <iostream>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

int main(void) {
    if (!glfwInit()) return 1;

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow *win = glfwCreateWindow(640, 480, "uve", nullptr, nullptr);
    if (!win) {
        glfwTerminate();
        return 1;
    }

    while (!glfwWindowShouldClose(win)) {
        glfwPollEvents();
    }

    std::cout << "Hello, world\n";
}
