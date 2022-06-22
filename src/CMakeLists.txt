cmake_minimum_required(VERSION 3.22)
project(src)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(src
        student_manager.cpp
        student_manager.h)
