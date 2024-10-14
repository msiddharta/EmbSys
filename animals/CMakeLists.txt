add_library(animals src/animals.cpp)

target_include_directories(animals PUBLIC include)

add_executable(animals_test
    test/main.cpp
    test/animals_test.cpp)


target_link_libraries(animals_test PRIVATE animals)

catch_discover_tests(animals_test)