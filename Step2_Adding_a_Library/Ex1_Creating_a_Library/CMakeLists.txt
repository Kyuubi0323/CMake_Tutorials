
cmake_minimum_required(VERSION 3.10)

project(Step2)

# Tạo executable từ tutorial.cpp
add_executable(Tutorial tutorial.cpp)

# Add Subdir 
add_subdirectory(MathFunctions)

# Link MathFunctions Library with Excutable Tutorial
target_link_libraries(Tutorial PUBLIC MathFunctions)

# Specify the library header files location
target_include_directories(Tutorial PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/MathFunctions")
