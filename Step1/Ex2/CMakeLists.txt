
cmake_minimum_required(VERSION 3.10)

# Tên và phiên bản dự án, và chỉ định ngôn ngữ C++
project(MyProject VERSION 1.0 LANGUAGES CXX)

# Chỉ định tiêu chuẩn C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Thêm tệp thực thi
add_executable(main main.cpp)

