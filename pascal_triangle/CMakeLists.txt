add_library(pascal src/pascal.cpp)

target_include_directories(pascal PUBLIC include)

add_executable(pascal_triangle src/main.cpp)

target_link_libraries(pascal_triangle PRIVATE pascal)

add_executable(pascal_test
    test/main.cpp
    test/pascal_test.cpp)

target_include_directories(pascal_test PUBLIC include)

target_link_libraries(pascal_test PRIVATE pascal)

catch_discover_tests(pascal_test)