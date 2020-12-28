#pragma once

// Manages the compilation of the project
struct BiltExecutor {
    char* (*GetModuleName)();
};


struct BiltExecutor GetBiltExecutor();