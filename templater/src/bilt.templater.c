#include <stdio.h>
#include <bilt.logger.h>

#include "bilt.templater.h"

static struct BiltLogger* log = NULL;

static char* getModuleName() {
    return "Bilt.Templater";
}

static struct ProjectLayout readProjectFile(char* path) {
    FILE* projectFile = fopen(path, "rb");
    //fread()
}

static void writeProjectFile(struct ProjectLayout project) {
    log->Debug("bilt.templater.WriteProjectFile called");
    log->Info("Project Name: %s", project.ProjectName);
}

static void generateBuildFiles(struct ProjectLayout project) {

}

struct BiltTemplater GetBiltTemplater() {
    if (log == NULL) {
        log = GetBiltLogger();
    }

    struct BiltTemplater ret = {
            .GetModuleName = getModuleName,
            .ReadProjectFile = readProjectFile,
            .WriteProjectFile = writeProjectFile,
            .GenerateBuildFiles = generateBuildFiles
    };

    return ret;
}