#include <iostream>
#include "reachout\reachout.h"
#include "spdlog\spdlog.h"

int main(int argc, char** argv)
{
	spdlog::info("Application Running ...");

	ro::GameWindow* gameWindow = new ro::GameWindow(800, 600, std::string("ReachOut Game - by Ali Asghar Manjotho"));
	gameWindow->show();

	std::cin.get();
	delete gameWindow;
	return 0;
}