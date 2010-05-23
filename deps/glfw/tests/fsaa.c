//========================================================================
// Fullscreen multisampling anti-aliasing test
// Copyright (c) Camilla Berglund <elmindreda@users.sourceforge.net>
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would
//    be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not
//    be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source
//    distribution.
//
//========================================================================
//
// This test renders a high contrast, slowly rotating quad, allowing for
// visual verification of whether FSAA is indeed enabled
//
//========================================================================

#include <GL/glfw.h>

#include <stdio.h>
#include <stdlib.h>

static void GLFWCALL window_size_callback(int width, int height)
{
    glViewport(0, 0, width, height);
}

int main(void)
{
    int samples;

    if (!glfwInit())
    {
        fprintf(stderr, "Failed to initialize GLFW\n");
        exit(1);
    }

    glfwOpenWindowHint(GLFW_FSAA_SAMPLES, 4);

    if (!glfwOpenWindow(640, 480, 0, 0, 0, 0, 0, 0, GLFW_WINDOW))
    {
        glfwTerminate();

        fprintf(stderr, "Failed to open GLFW window\n");
        exit(1);
    }

    glfwSetWindowTitle("Aliasing Detector");
    glfwSetWindowSizeCallback(window_size_callback);
    glfwSwapInterval(1);

    samples = glfwGetWindowParam(GLFW_FSAA_SAMPLES);
    if (samples)
        printf("Context reports FSAA is supported with %i samples\n", samples);
    else
        printf("Context reports FSAA is unsupported\n");

    glClearColor(0.f, 0.f, 0.f, 0.f);

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.f, 1.f, 0.f, 1.f);

    while (glfwGetWindowParam(GLFW_OPENED))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        glLoadIdentity();
        glRotatef((GLfloat) glfwGetTime(), 0.f, 0.f, 1.f);

        glBegin(GL_QUADS);
        glColor3f(1.f, 1.f, 1.f);
        glVertex2f(-0.25f,  0.25f);
        glVertex2f( 0.25f,  0.25f);
        glVertex2f( 0.25f, -0.25f);
        glVertex2f(-0.25f, -0.25f);
        glEnd();

        glfwSwapBuffers();
    }

    glfwTerminate();
    exit(0);
}

