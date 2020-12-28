#pragma once

enum ProjectType {
    Binary,
    SharedLibrary,
    StaticLibrary,
    None
};

struct Project {
    char* RelativePath;
    char* Name;
    enum ProjectType Type;
};

struct ProjectLayout {
    char* ProjectName;
    enum ProjectType ProjectType;
    unsigned int SubprojectCount;
    struct ProjectLayout* Subprojects;
};

// Manages the creation and organisation of files
struct BiltTemplater {
    char* (*GetModuleName)();
    struct ProjectLayout (*ReadProjectFile)(char* path);
    void (*WriteProjectFile)(struct ProjectLayout);
    void (*GenerateBuildFiles)(struct ProjectLayout);
};


struct BiltTemplater GetBiltTemplater();