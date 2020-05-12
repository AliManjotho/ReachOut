#ifndef REACHOUT_CORE_CORE_H
#define REACHOUT_CORE_CORE_H

#ifdef RO_ENGINE
#define RO_API __declspec(dllexport)
#else
#define RO_API __declspec(dllimport)
#endif// RO_ENGINE

#endif //REACHOUT_CORE_CORE_H

