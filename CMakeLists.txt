cmake_minimum_required(VERSION 3.0.0)
project(VkDemo VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(CTest)
enable_testing()

add_executable(VkDemo stb_image.h MVP.h Vertex.h SpvLoader.h SwapChainSupport.h Queues.h Triangle.h Triangle.cpp main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

find_package(Vulkan REQUIRED)
include_directories(${Vulkan_INCLUDE_DIRS})
find_package(glfw3 3.3 REQUIRED)

set(GLM_INCLUDE_DIRS "/opt/homebrew/Cellar/glm/0.9.9.8/include")
set(GLM_LIB_DIRS "/opt/homebrew/Cellar/glm/0.9.9.8/lib")

include_directories(${GLM_INCLUDE_DIRS})

target_link_libraries(VkDemo ${Vulkan_LIBRARIES})
target_link_libraries(VkDemo glfw)