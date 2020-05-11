#pragma once

#include <string>
#include <vector>
#include "reachout\core\core.h"

namespace ro
{
	class RO_API Window
	{
	private:
		int id;
		int width;
		int height;
		std::string title;

	private:
		static int idCounter;

	public:
		Window(int width, int height, const std::string& title);

		int getId();
		const std::string& getTitle();
		std::vector<int> getResolution();
		void setTitle(const std::string& title);
		void setResolution(int width, int height);
				
		bool initialize(int &argc, char** &argv);

	public:
		static void keyboard(unsigned char key, int x, int y);
		static void display();
	};
}
