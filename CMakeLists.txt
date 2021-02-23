cmake_minimum_required(VERSION 3.17)
project(26_02_Project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(26_02_Project
        classes.cpp
        classes.h
        main.cpp)
