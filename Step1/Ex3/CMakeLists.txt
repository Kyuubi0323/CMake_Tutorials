cmake_minimum_required(VERSION 3.18)
    
# here we specify that the project is C language only, so the default
# C compiler on the system will be used
project(C++_Project VERSION 0.0.1)

#We will need to explicitly state in the CMake code that it should use the correct flags. One way to enable support for a specific C++ standard in CMake is by using the CMAKE_CXX_STANDARD variable. For this tutorial, set the CMAKE_CXX_STANDARD variable in the CMakeLists.txt file to 11 and CMAKE_CXX_STANDARD_REQUIRED to True. Make sure to add the CMAKE_CXX_STANDARD declarations above the call to add_executable().



set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(app_main app_main.cpp)
