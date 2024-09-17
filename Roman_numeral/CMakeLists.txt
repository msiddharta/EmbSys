# library for greet()
add_library(convert_to_roman src/numerals.cpp)
target_include_directories(convert_to_roman PUBLIC include)

# executable using the library
add_executable(numeral_main
src/main.cpp
)

target_link_libraries(numeral_main convert_to_roman)

# test executable testing the library
#add_executable(numeral_test
#test/main.cpp
#test/numeral_test.cpp
#)

#target_link_libraries(numeral_test convert_to_roman)

#catch_discover_tests(numeral_test)