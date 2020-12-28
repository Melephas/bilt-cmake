cmake_minimum_required(VERSION 3.17)
project(bilt.templater C)

set(CMAKE_C_STANDARD 11)

add_library(bilt.templater SHARED src/bilt.templater.c)

target_include_directories(bilt.templater PUBLIC include)