#pragma once

#include <string>
#include <vector>
#include "reachout\core\core.h"
#include "SFML\Window.hpp"

namespace ro
{
	class RO_API GameWindow
	{
	private:
		int id;
		int width;
		int height;
		std::string title;
		sf::Window* sfmlWindow;

	private:
		static int idCounter;

	public:
		GameWindow(int width, int height, const std::string& title);

		int getId();
		const std::string& getTitle();
		std::vector<int> getResolution();
		void setTitle(const std::string& title);
		void setResolution(int width, int height);

		void show();
	};
}
