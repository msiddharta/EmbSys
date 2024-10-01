#include <catch2/catch_all.hpp>
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


TEST_CASE("Fizz the number is divisible by 5")
{
    string check1 = fizzbuzz(5);
    string check2 = fizzbuzz(10);
    string check3 = fizzbuzz(20);

    REQUIRE(check1 == "buzz");
    REQUIRE(check2 == "buzz");
    REQUIRE(check3 == "buzz");
}


TEST_CASE("Fizz the number is divisible by 3 AND 5")
{
    string check1 = fizzbuzz(15);
    string check2 = fizzbuzz(30);
    string check3 = fizzbuzz(60);

    REQUIRE(check1 == "15");
    REQUIRE(check2 == "30");
    REQUIRE(check3 == "60");
}