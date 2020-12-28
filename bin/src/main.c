#include <stdio.h>

#include <bilt.executor.h>
#include <bilt.manager.h>
#include <bilt.templater.h>
#include <bilt.logger.h>

int main() {
    struct BiltLogger* log = GetBiltLogger();
    log->Debug("Program started");
    log->Debug("Loaded %s", log->GetModuleName());

    struct BiltExecutor executor = GetBiltExecutor();
    log->Debug("Loaded %s", executor.GetModuleName());

    struct BiltManager manager = GetBiltManager();
    log->Debug("Loaded %s", manager.GetModuleName());

    struct BiltTemplater templater = GetBiltTemplater();
    log->Debug("Loaded %s", templater.GetModuleName());

    struct ProjectLayout layout = {
            .ProjectName = "bilt",
            .ProjectType = None,
            .SubprojectCount = 0,
            .Subprojects = NULL
    };

    templater.WriteProjectFile(layout);

    return 0;
}