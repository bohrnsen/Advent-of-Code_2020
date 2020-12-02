cmake_minimum_required(VERSION 3.17)
project(Puzzle_1 C)

set(CMAKE_C_STANDARD 11)

add_executable(Puzzle_1 main.c)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})