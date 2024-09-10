# Make MathFunctions Library from *.cpp source files
add_library(MathFunctions MathFunctions.cpp mysqrt.cpp)

add_library(SqrtLibrary STATIC mysqrt.cpp)
target_link_libraries(MathFunctions PRIVATE SqrtLibrary)

