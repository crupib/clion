cmake_minimum_required(VERSION 4.0)
project(singleton)

set(CMAKE_CXX_STANDARD 20)

add_executable(singleton main.cpp
        SequentialIdProvider.h
        SequentialIdProvider.cpp)
