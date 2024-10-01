# library for greet()
add_library(leapyear src/leapyear.cpp)
target_include_directories(leapyear PUBLIC include)

# executable using the library
#add_executable(leapyear
#src/leapyear.cpp
#)

#target_link_libraries(numeral_main convert_to_roman)

# test executable testing the library
add_executable(leapyear_test
test/main.cpp
test/leapyear_test.cpp
)

target_include_directories(leapyear_test PUBLIC include)

target_link_libraries(leapyear_test PRIVATE leapyear)

catch_discover_tests(leapyear_test)