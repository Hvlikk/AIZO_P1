cmake_minimum_required(VERSION 3.28)
project(Aizo2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Aizo2 main.cpp
        functions.h
        sorts.h
        menu.cpp
        sorts.cpp
        menu.h)
