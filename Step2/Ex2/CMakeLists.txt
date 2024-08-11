cmake_minimum_required(VERSION 3.10)

project(Tutorial)

# Tạo executable từ tutorial.cpp
add_executable(Tutorial tutorial.cpp)

# Thêm thư mục con MathFunctions
add_subdirectory(MathFunctions)

# Liên kết thư viện MathFunctions với executable Tutorial
target_link_libraries(Tutorial PUBLIC MathFunctions)

# Chỉ định thư mục chứa các header files
target_include_directories(Tutorial PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/MathFunctions")
