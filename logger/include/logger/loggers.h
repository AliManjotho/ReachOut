#pragma once

#include <string>
#include "logger\core.h"
#include "logger\log.h"

logger::logger* EngineLogger = new logger::logger("ENGINE");
logger::logger* AppLogger = new logger::logger("APP");