cmake_minimum_required(VERSION 3.17)
project(bilt.logger C)

set(CMAKE_C_STANDARD 11)

add_library(bilt.logger SHARED src/bilt.logger.c src/bilt.logger.c)

target_include_directories(bilt.logger PUBLIC include)