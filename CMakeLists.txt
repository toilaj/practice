cmake_minimum_required(VERSION 3.17)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(algorithm main.cpp bubble_sort.cpp bubble_sort.h selection_sort.cpp selection_sort.h common.cpp common.h insert_sort.cpp insert_sort.h shell_sort.cpp shell_sort.h)