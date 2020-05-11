#pragma once

#ifdef RO_ENGINE
#define RO_API __declspec(dllexport)
#else
#define RO_API __declspec(dllimport)
#endif// RO_ENGINE

