cmake_minimum_required(VERSION 3.10)

#Explicitly state to the correct flags, we use C++ 11

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


project(File2 C CXX)

add_executable(mono main.cpp)

