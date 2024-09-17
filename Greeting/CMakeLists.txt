# library for greet()
add_library(greet src/greeting.cpp)
target_include_directories(greet PUBLIC include)

# executable using the library
add_executable(greet_main
src/main.cpp
)

target_link_libraries(greet_main greet)

# test executable testing the library
add_executable(greet_test
test/main.cpp
test/greeting_test.cpp
)

target_link_libraries(greet_test greet)

catch_discover_tests(greet_test)