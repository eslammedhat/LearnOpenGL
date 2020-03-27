/*
 * main.cpp
 *
 *  Created on: Feb 29, 2020
 *      Author: eslammedhat
 */

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

using namespace std;


static void framebuffer_size_callback(GLFWwindow* window, int width, int height);

static void processInput(GLFWwindow *window);

int helloWindow(void)
{

	glfwInit();
	/*
	 * glfwWindowHind : configures GLFW
	 * - first arg -> what option to set
	 * - GLFW_CONTEXT_VERSION_MAJOR used to tell GLFW what version of openGl we
	 *   are using
	 */
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	/* uncomment for macos */
	//glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	/* create window object */
	GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	/*
	 * Now this is very important. We have to initialize opnGl functions before
	 * we call them otherwise calling them won lead to any thing.
	 * We use GLAD to accomplish this.
	 * We pass GLAD the function to load the adress of the OpenGL function
	 * pointers which is OS-specific. GLFW gives us glfwGetProcAddress that
	 * defines the correct function based on which OS we're compiling for.
	 */
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return -1;
	}

	/*
	 * The first two parameters of glViewport set the location of the lower
	 * left corner of the window. The third and fourth parameter set the width
	 * and height of the rendering window in pixels, which we set equal to
	 * GLFW's window size. We could actually set the viewport dimensions at
	 * values smaller than GLFW's dimensions; then all the OpenGL rendering
	 * would be displayed in a smaller window and we could for example display
	 * other elements outside the OpenGL viewport.
	 */
	glViewport(0, 0, 800, 600);

	/*
	 * We do have to tell GLFW we want to call this function on every window
	 * resize by registering it
	 * */
	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

	/*
	 * render loop,
	 */
	while(!glfwWindowShouldClose(window))
	{
		// inputs
		processInput(window);

		// rendering
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		// check and call events and swap the buffers
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	/* terminate resources */
	glfwTerminate();
	return 0;
}

static void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	glViewport(0, 0, width, height);
}

static void processInput(GLFWwindow *window)
{
	if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
}
