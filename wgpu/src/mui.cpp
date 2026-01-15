#include <iostream>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#define VOLK_IMPLEMENTATION
#include "volk.h"

#define VMA_IMPLEMENTATION
#define VMA_VULKAN_VERSION 1004000
#include "vk_mem_alloc.h"

#include "ttf.cpp"

int main(void) {
    if (!glfwInit()) return 1;
    if (volkInitialize() != VK_SUCCESS) return 1;

    uint32_t version = volkGetInstanceVersion();

    std::cout << VK_VERSION_MAJOR(version) << '.' << VK_VERSION_MINOR(version) << '.' << VK_VERSION_PATCH(version) << '\n';

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow *win = glfwCreateWindow(640, 480, "uve", nullptr, nullptr);
    if (!win) {
        glfwTerminate();
        return 1;
    }

    //VmaAllocator allocator;
    //VmaVulkanFunctions vulkanFunctions = {};
    //vulkanFunctions.vkGetInstanceProcAddr = &vkGetInstanceProcAddr;
    //vulkanFunctions.vkGetDeviceProcAddr = &vkGetDeviceProcAddr;
    //VmaAllocatorCreateInfo allocatorCreateInfo = {
    //    .flags = VMA_ALLOCATOR_CREATE_EXT_MEMORY_BUDGET_BIT;
    //    .vulkanApiVersion = VK_API_VERSION_1_2;
    //    .physicalDevice = physicalDevice;
    //    .device = device;
    //    .instance = instance;
    //    .pVulkanFunctions = &vulkanFunctions;
    //};

    while (!glfwWindowShouldClose(win)) {
        glfwPollEvents();
    }

    std::cout << "Hello, world\n";
}
