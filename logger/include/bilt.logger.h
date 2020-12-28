#pragma once

#include <stdio.h>
#include <stdbool.h>

// Manages the logging output of the whole program
struct BiltLogger {
    char* (*GetModuleName)();
    void (*Debug)(const char* format, ...);
    void (*Info)(const char* format, ...);
    void (*Warn)(const char* format, ...);
    void (*Error)(const char* format, ...);
};

struct BiltLogger* GetBiltLogger();