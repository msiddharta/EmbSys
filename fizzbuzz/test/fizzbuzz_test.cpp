#include <catch2/catch.hpp>
#include <fizzbuzz.h>


TEST_CASE("Fizz the number is divisible by 3")
{
    string check1 = fizzbuzz(3);
    string check2 = fizzbuzz(6);
    string check3 = fizzbuzz(9);

    REQUIRE(check1 == "fizz");
    REQUIRE(check2 == "fizz");
    REQUIRE(check3 == "fizz");
}


TEST_CASE("Buzz the number is divisible by 5")
{
    string check1 = fizzbuzz(5);
    string check2 = fizzbuzz(10);
    string check3 = fizzbuzz(20);

    REQUIRE(check1 == "buzz");
    REQUIRE(check2 == "buzz");
    REQUIRE(check3 == "buzz");
}


TEST_CASE("Fizzbuzz the number is divisible by 3 AND 5")
{
    string check1 = fizzbuzz(15);
    string check2 = fizzbuzz(30);
    string check3 = fizzbuzz(60);

    REQUIRE(check1 == "fizzbuzz");
    REQUIRE(check2 == "fizzbuzz");
    REQUIRE(check3 == "fizzbuzz");
}

TEST_CASE("None of them above")
{
    string check1 = fizzbuzz(17);
    string check2 = fizzbuzz(7);
    string check3 = fizzbuzz(19);

    REQUIRE(check1 == "17");
    REQUIRE(check2 == "7");
    REQUIRE(check3 == "19");
}

TEST_CASE("Illegal number 0 or <0")
{
    string check1 = fizzbuzz(0);
    string check2 = fizzbuzz(-1);
    string check3 = fizzbuzz(-3);

    REQUIRE(check1 == "Illegal number!");
    REQUIRE(check2 == "Illegal number!");
    REQUIRE(check3 == "Illegal number!");
}