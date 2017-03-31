cmake_minimum_required(VERSION 3.6)
project(sudoku)

set(CMAKE_C_STANDARD 90)
set(SOURCE_FILES main.c)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")
add_subdirectory(libft)
add_executable(sudoku ${SOURCE_FILES})
target_link_libraries(sudoku PUBLIC libft)
