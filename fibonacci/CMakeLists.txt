add_library(fibonacci src/fibonacci.cpp)

target_include_directories(fibonacci PUBLIC include)

add_executable(fib20 src/main.cpp)

target_link_libraries(fib20 PRIVATE fibonacci)