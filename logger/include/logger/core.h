#pragma once

#ifdef LOGGER
#define LOG_API __declspec(dllexport)
#else
#define LOG_API __declspec(dllimport)
#endif// LOGGER

