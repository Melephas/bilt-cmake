cmake_minimum_required(VERSION 3.17)

project(bilt C)

add_subdirectory(manager)
add_subdirectory(templater)
add_subdirectory(executor)
add_subdirectory(logger)
add_subdirectory(bin)

target_link_libraries(
        bilt.manager
        PUBLIC bilt.logger
)

target_link_libraries(
        bilt.templater
        PUBLIC bilt.logger
)

target_link_libraries(
        bilt.executor
        PUBLIC bilt.logger
)

target_link_libraries(
        bilt.bin
        PUBLIC bilt.logger
        PUBLIC bilt.manager
        PUBLIC bilt.templater
        PUBLIC bilt.executor
)