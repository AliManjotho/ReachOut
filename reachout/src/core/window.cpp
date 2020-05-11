#include <iostream>
#include <iomanip>
#include "reachout\core\window.h"
#include "logger\logger.h"
#include "GL\freeglut.h"

namespace ro
{
	int Window::idCounter = 0;

	Window::Window(int width, int height, const std::string& title) :
		width{ width }, height{ height }, title{ std::string(title) }
	{
		idCounter++;
		this->id = idCounter;
	}


	int Window::getId()
	{
		return this->id;
	}

	const std::string& Window::getTitle()
	{
		return this->title;
	}

	std::vector<int> Window::getResolution()
	{
		std::vector<int> res = { this->width, this->height };
		return res;
	}

	void Window::setTitle(const std::string& title)
	{
		this->title = std::string(title);
	}

	void Window::setResolution(int width, int height)
	{
		this->width = width;
		this->height = height;
	}



	void Window::keyboard(unsigned char key, int x, int y)
	{
		switch (key)
		{
			/* Exit on escape key press */
		case '\x1B':
			exit(EXIT_SUCCESS);
			break;
		}
	}
	void Window::display()
	{
		glClear(GL_COLOR_BUFFER_BIT);

		/* Display a red square */
		glColor3f(1.0f, 0.0f, 0.0f);

		glBegin(GL_POLYGON);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.5f, -0.5f);
		glVertex2f(0.5f, 0.5f);
		glVertex2f(-0.5f, 0.5f);
		glEnd();

		glFlush();
	}
	

	bool Window::initialize(int &argc, char** &argv)
	{
		glutInit(&argc, argv);
		glutInitWindowSize(this->width, this->height);
		glutCreateWindow(this->title.c_str());
		
		glutKeyboardFunc(&keyboard);
		glutDisplayFunc(&display);

		glutMainLoop();		

		return true;		
	}

}