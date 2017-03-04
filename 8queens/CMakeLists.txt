cmake_minimum_required(VERSION 3.6)
project(8queens)

set(CMAKE_C_STANDARD 90)
set(SOURCE_FILES main.c check.c queen.h)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")
add_subdirectory(libft)
add_executable(8queens ${SOURCE_FILES})
target_link_libraries(8queens PUBLIC libft)
