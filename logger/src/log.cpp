#include <iostream>
#include <Windows.h>
#include "logger\logger.h"

namespace logger
{
	logger::logger(const std::string& name) : name { name }
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}

	void logger::setConsoleColor(const int COLOR)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR);
	}

	void logger::warn(const std::string& message)
	{
		logger::setConsoleColor(logger::YELLOW);
		std::cout << this->name << " : WARN : " << message << std::endl;
		logger::setConsoleColor(logger::WHITE);
	}

	void logger::info(const std::string& message)
	{
		logger::setConsoleColor(logger::GREEN);
		std::cout << this->name << " : INFO : " << message << std::endl;
		logger::setConsoleColor(logger::YELLOW);
	}

	void logger::error(const std::string& message)
	{
		logger::setConsoleColor(logger::RED);
		std::cout << this->name << " : ERROR : " << message << std::endl;
		logger::setConsoleColor(logger::YELLOW);
	}
}