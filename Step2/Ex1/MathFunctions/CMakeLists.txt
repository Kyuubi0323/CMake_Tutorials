# Tạo thư viện MathFunctions từ các file nguồn
add_library(MathFunctions MathFunctions.cpp mysqrt.cpp)

# Thêm tùy chọn USE_MYMATH
option(USE_MYMATH "Use tutorial provided math implementation" ON)

if (USE_MYMATH)
  target_compile_definitions(MathFunctions PRIVATE "USE_MYMATH")
  add_library(SqrtLibrary STATIC mysqrt.cpp)
  target_link_libraries(MathFunctions PRIVATE SqrtLibrary)
endif()
