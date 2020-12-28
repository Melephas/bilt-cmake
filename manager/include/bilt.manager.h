#pragma once

// Performs the general managment of the project, including invocation of the executor and templator modules
struct BiltManager {
    char* (*GetModuleName)();
};


struct BiltManager GetBiltManager();