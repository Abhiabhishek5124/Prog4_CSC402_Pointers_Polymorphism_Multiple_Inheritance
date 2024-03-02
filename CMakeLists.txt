cmake_minimum_required(VERSION 3.26)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled1 main.cpp
        TeachingAsst.h
        Student.h
        Person.h
        Person.cpp
        Faculty.cpp
        Student.cpp
        TeachingAsst.cpp)
