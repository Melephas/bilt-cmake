cmake_minimum_required(VERSION 3.17)
project(bilt.manager C)

set(CMAKE_C_STANDARD 11)

add_library(bilt.manager SHARED src/bilt.manager.c)

target_include_directories(bilt.manager PUBLIC include)