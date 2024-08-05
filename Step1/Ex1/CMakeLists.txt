cmake_minimum_required(VERSION 3.5)
    
# here we specify that the project is C language only, so the default
# C compiler on the system will be used
project(CMAKE C)

add_executable(main main.c)