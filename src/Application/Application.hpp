#include <cstdint>

class GLFWwindow;
class VkInstance_T;
using VkInstance = VkInstance_T*;

class Application {

public:
    void run();

    const uint32_t WIDTH = 800;
    const uint32_t HEIGHT = 600;

private:
    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();

    GLFWwindow* window;
    VkInstance instance;
};