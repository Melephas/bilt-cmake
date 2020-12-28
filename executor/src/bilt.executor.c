#include "bilt.executor.h"

static char* getModuleName() {
    return "Bilt.Executor";
}

struct BiltExecutor GetBiltExecutor() {
    struct BiltExecutor ret = {
            getModuleName,
    };

    return ret;
}