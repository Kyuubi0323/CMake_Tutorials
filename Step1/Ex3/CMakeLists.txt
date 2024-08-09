cmake_minimum_required(VERSION 3.18)
    
# here we specify that the project is C language only, so the default
# C compiler on the system will be used
project(C++_Project VERSION 0.0.1)

option(FOO_ENABLE "Enable Foo" ON)
if(FOO_ENABLE)
  set(FOO_STRING "foo")
endif()
configure_file(foo.h.in foo.h @ONLY)
target_include_directories(C++_Project PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(app_main app_main.cpp)
