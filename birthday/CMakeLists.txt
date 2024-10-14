add_library(birthday src/birthday.cpp)

target_include_directories(birthday PUBLIC include)

add_executable(birthday_test
    test/main.cpp
    test/birthday_test.cpp)

target_include_directories(birthday_test PUBLIC include)

target_link_libraries(birthday_test PRIVATE birthday)

catch_discover_tests(birthday_test)