#ifndef LOGGER_LOG_H
#define LOGGER_LOG_H

#include <string>
#include "logger\core.h"


namespace logger
{
	class LOG_API logger
	{
	private:
		std::string name;
		static const int WHITE = 7;
		static const int GREEN = 2;
		static const int RED = 4;
		static const int YELLOW = 6;

	private:
		static void setConsoleColor(const int COLOR);

	public:
		logger(const std::string& name);

		void warn(const std::string& message);
		void info(const std::string& message);
		void error(const std::string& message);
	};
}

#endif //LOGGER_LOG_H

