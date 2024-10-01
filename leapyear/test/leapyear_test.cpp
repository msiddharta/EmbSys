#include <catch2/catch.hpp>
#include <leapyear.h>


TEST_CASE("A year which is not divisible by 4 is not a leap")
{
    bool check1 = isLeapYear(1);
    bool check2 = isLeapYear(2);
    bool check3 = isLeapYear(3);

    REQUIRE(check1 == false);
    REQUIRE(check2 == false);
    REQUIRE(check3 == false);
}