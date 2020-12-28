cmake_minimum_required(VERSION 3.17)
project(bilt.executor C)

set(CMAKE_C_STANDARD 11)

add_library(bilt.executor SHARED src/bilt.executor.c)

target_include_directories(bilt.executor PUBLIC include)