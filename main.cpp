#define GLFW_INCLUDE_VULKAN
#include "GLFW/glfw3.h"

int main()
{
	/* Doesn't work without this, most likely because i'm using wsl to compile and run */
	glfwInitHint(GLFW_PLATFORM, GLFW_PLATFORM_X11);
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	GLFWwindow* window = glfwCreateWindow(800, 600, "Window", nullptr, nullptr);

	while(!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}
