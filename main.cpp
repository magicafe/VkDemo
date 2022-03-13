#include <vulkan/vulkan.h>
#include <stdexcept>
#include <cstdlib>
#include <iostream>

#include "Triangle.h"

int main() {
    Triangle app;

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}