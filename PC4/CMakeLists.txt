cmake_minimum_required(VERSION 3.13)
project(PC3)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS -pthread)

add_executable(PC3 Concurrente.h main.cpp)