cmake_minimum_required(VERSION 3.10)

#improve our executable by printing a version number
project(MajorMinor VERSION 1.0)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#generate *.h file from *.h.in file in BINARY_dir
configure_file(
  "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"  
  "${PROJECT_BINARY_DIR}/TutorialConfig.h"     
)


add_executable(main main.cpp)

#Add Binary dir into searching source
#to specify where the executable target 
#should look for include files.

target_include_directories(main PUBLIC
                           "${PROJECT_BINARY_DIR}")

