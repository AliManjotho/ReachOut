#include <iostream>
#include "reachout\reachout.h"

int main(int argc, char** argv)
{
	std::cout << "Application Running ..." << std::endl;

	ro::GameWindow* gameWindow = new ro::GameWindow(800, 600, std::string("ReachOut Game - by Ali Asghar Manjotho"));
	gameWindow->show();

	std::cin.get();
	delete gameWindow;
	return 0;
}