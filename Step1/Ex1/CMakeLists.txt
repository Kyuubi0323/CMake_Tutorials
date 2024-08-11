cmake_minimum_required(VERSION 3.10)
    
# here we specify that the project is C language only, so the default
# C compiler on the system will be used
project(CMake C)

add_executable(main main.c)
