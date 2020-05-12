#ifndef REACHOUT_CORE_GAMEWINDOW_H
#define REACHOUT_CORE_GAMEWINDOW_H

#include <string>
#include <vector>
#include "reachout\core\core.h"
#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"

namespace ro
{
	class RO_API GameWindow : public sf::RenderWindow
	{
	public:
		GameWindow(int width, int height, const std::string& title);

		void show();
	};
}

#endif //REACHOUT_CORE_GAMEWINDOW_H
