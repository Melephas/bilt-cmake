#include <bilt.logger.h>
#include <stdarg.h>
#include <stdlib.h>


static struct BiltLogger* logger = NULL;

static char* getModuleName() {
    return "Bilt.Logger";
}

static void debug(const char* format, ...) {
    char buffer[1024 * 16];
    va_list args;

    va_start(args, format);
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    printf("[d] %s\n", buffer);
}

static void info(const char* format, ...) {
    char buffer[1024 * 16];
    va_list args;

    va_start(args, format);
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    printf("[i] %s\n", buffer);
}

static void warn(const char* format, ...) {
    char buffer[1024 * 16];
    va_list args;

    va_start(args, format);
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    printf("[w] %s\n", buffer);
}

static void error(const char* format, ...) {
    char buffer[1024 * 16];
    va_list args;

    va_start(args, format);
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    printf("[e] %s\n", buffer);
}


struct BiltLogger* GetBiltLogger() {
    if (logger == NULL) {
        logger = malloc(sizeof(struct BiltLogger));
        logger->GetModuleName = getModuleName;
        logger->Debug = debug;
        logger->Info = info;
        logger->Warn = warn;
        logger->Error = error;
    }

    return logger;
}