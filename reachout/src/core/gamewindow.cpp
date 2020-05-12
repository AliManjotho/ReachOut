#include <iostream>
#include <iomanip>
#include "reachout\core\gamewindow.h"
#include "logger\logger.h"

namespace ro
{
	int GameWindow::idCounter = 0;

	GameWindow::GameWindow(int width, int height, const std::string& title) :
		width{ width }, height{ height }, title{ std::string(title) }
	{
		idCounter++;
		this->id = idCounter;
				
		this->sfmlWindow = new sf::Window(sf::VideoMode(this->width, this->height), this->title);
		EngineLogger->info("Game window created.");

		this->sfmlWindow->setVisible(false);
		EngineLogger->warn("Game window hidden.");		
	}


	int GameWindow::getId()
	{
		return this->id;
	}

	const std::string& GameWindow::getTitle()
	{
		return this->title;
	}

	std::vector<int> GameWindow::getResolution()
	{
		std::vector<int> res = { this->width, this->height };
		return res;
	}

	void GameWindow::setTitle(const std::string& title)
	{
		this->title = std::string(title);
	}

	void GameWindow::setResolution(int width, int height)
	{
		this->width = width;
		this->height = height;
	}

	void GameWindow::show()
	{
		this->sfmlWindow->setVisible(true);
		EngineLogger->info("Game window shown.");

		EngineLogger->info("Entering Game Loop.");

		while (this->sfmlWindow->isOpen())
		{
			sf::Event event;
			while (sfmlWindow->pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
				{
					sfmlWindow->close();

					delete this->sfmlWindow;
					exit(EXIT_SUCCESS);
				}				
			}
		}

	}
}