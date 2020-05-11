#include <iostream>
#include "reachout\reachout.h"

int main(int argc, char** argv)
{
	std::cout << "Application Running ..." << std::endl;

	ro::Window* win = new ro::Window(640, 480, std::string("FreeGlut Test"));
	win->initialize(argc, argv);

	std::cin.get();

	delete win;
	return 0;
}