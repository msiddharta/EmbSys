# library for greet()
add_library(fizzbuzz src/fizzbuzz.cpp)
target_include_directories(fizzbuzz PUBLIC include)

# executable using the library
add_executable(fizzbuzz_main
src/fizzbuzz_main.cpp
)

target_link_libraries(fizzbuzz_main fizzbuzz)

# test executable testing the library
add_executable(fizzbuzz_test
test/main.cpp
test/fizzbuzz_test.cpp
)

target_include_directories(fizzbuzz_test PUBLIC include)

target_link_libraries(fizzbuzz_test PRIVATE fizzbuzz)

catch_discover_tests(fizzbuzz_test)