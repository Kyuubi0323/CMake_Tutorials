# Yêu cầu phiên bản tối thiểu của CMake
cmake_minimum_required(VERSION 3.10)

# Định nghĩa tên dự án và số phiên bản
project(MyProject VERSION 1.0)

# Đặt tiêu chuẩn C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Cấu hình tệp header với số phiên bản
configure_file(
  "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"  # Tệp mẫu
  "${PROJECT_BINARY_DIR}/TutorialConfig.h"     # Tệp được tạo
)

# Thêm tệp nguồn vào dự án
add_executable(main main.cpp)

# Thêm thư mục binary vào danh sách thư mục include
target_include_directories(main PUBLIC
                           "${PROJECT_BINARY_DIR}")
