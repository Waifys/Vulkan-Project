cmake_minimum_required(VERSION 3.13)

project(vulkantutorial)

set(CMAKE_CXX_STANDARD 17)

find_package(Vulkan REQUIRED)
find_package(glfw3 3.4 REQUIRED)

add_executable(vulkantutorial main.cpp)

target_link_libraries(vulkantutorial glfw ${GLFW_LIBRARIES} Vulkan::Vulkan)
