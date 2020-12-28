#include "bilt.manager.h"

static char* getModuleName() {
    return "Bilt.Manager";
}

struct BiltManager GetBiltManager() {
    struct BiltManager ret = {
            getModuleName,
    };

    return ret;
}