#include "Graphics\Renderer.h"

// Library includes

// External includes
#include <GL\freeglut.h>

// Engine includes

namespace engine {
namespace graphics {

    void Render()
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glClearColor(0.25f, 0.25f, 0.25f, 1.0f);

        glutSwapBuffers();
    }

} // namespace renderer
} // namespace engine

