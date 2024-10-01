#include <catch2/catch.hpp>
#include <fizzbuzz.h>


TEST_CASE("Fizz the number is divisible by 3")
{
    string check1 = fizzbuzz(3);
    // string check2 = fizzbuzz(6);
    //string check3 = fizzbuzz(9);

    REQUIRE(check1 == "fizz");
    // REQUIRE(check2 == "fizz");
    //REQUIRE(check3 == "fizz");
}