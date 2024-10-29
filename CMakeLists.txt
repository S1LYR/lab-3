cmake_minimum_required(VERSION 3.29)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1 main.cpp
        Person.cpp
        Person.h
        Name.cpp
        Name.h

        City.h
        City.cpp
        City.cpp
        Fraction.cpp
        Fraction.h)
