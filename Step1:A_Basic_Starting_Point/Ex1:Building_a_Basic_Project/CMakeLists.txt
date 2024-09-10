
cmake_minimum_required(VERSION 3.10)
    
# here we specify that the project is C language only, so the default
# C compiler on the system will be used
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(MyProject VERSION 1.0 LANGUAGES CXX)

add_executable(app_C app_main.cpp)
