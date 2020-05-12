#ifndef LOGGER_CORE_H
#define LOGGER_CORE_H

#ifdef LOGGER
#define LOG_API __declspec(dllexport)
#else
#define LOG_API __declspec(dllimport)
#endif// LOGGER

#endif //LOGGER_CORE_H