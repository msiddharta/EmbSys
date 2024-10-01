#include <catch2/catch.hpp>
#include <greeting.h>

const std::string DefaultGreet = "Hello World!";

TEST_CASE("greet() without name returns a default greet")
{
    // arrange
    // act
    std::string value = greet();
    // assert
    REQUIRE(value == DefaultGreet);
}

TEST_CASE("greet(Franz) returns Hello Franz!")
{
    // arrange
    const char *name = "Franz";
    // act
    std::string value = greet(name);
    // assert
    REQUIRE(value == "Hello Franz!");
}

TEST_CASE("greet(\"\") returns Hello World!")
{
    // arrange
    const char *name = "";
    // act
    std::string value = greet(name);
    //assert
    REQUIRE(value == DefaultGreet);
}