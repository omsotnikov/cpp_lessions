cmake_minimum_required(VERSION 3.14)
project(cpp_practice)

set(CMAKE_CXX_STANDARD 11)

add_executable(hello main.cpp my_functions.cpp my_functions.hpp)
