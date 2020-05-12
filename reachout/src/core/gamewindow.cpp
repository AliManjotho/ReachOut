#include "reachout\core\gamewindow.h"
#include "reachout\gameobjects\player.h"
#include "logger\logger.h"

namespace ro
{
	GameWindow::GameWindow(int width, int height, const std::string& title) :
		sf::RenderWindow(sf::VideoMode(width, height), title, sf::Style::Default, sf::ContextSettings(0U, 0U, 8, 1U, 1U, 0U, false))
	{
		EngineLogger->info("Game window created.");
	}
	

	


	void GameWindow::show()
	{
		this->setActive(false);
		EngineLogger->warn("Game window deactivated.");


		EngineLogger->info("Entering Game Loop.");

		while (this->isOpen())
		{
			sf::Event event;
			while (this->pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
				{
					this->close();
					exit(EXIT_SUCCESS);
				}				
			}


			this->clear(sf::Color::Black);
			

			Player player;

			this->draw(player);


			this->display();
		}

	}
}