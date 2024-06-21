cmake_minimum_required(VERSION 3.28.3)
project(findroot)

set(CMAKE_CXX_STANDARD_14)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/..)

add_executable(findroot findroots.cpp)
