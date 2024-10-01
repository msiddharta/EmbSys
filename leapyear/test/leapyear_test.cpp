#include <catch2/catch_all.hpp>
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

TEST_CASE("A year <0 is not defined as leapyear")
{
    bool check1 = isLeapYear(-1);
    bool check2 = isLeapYear(-4);
    bool check3 = isLeapYear(-100);

    REQUIRE(check1 == false);
    REQUIRE(check2 == false);
    REQUIRE(check3 == false);
}

TEST_CASE("The year 0 is not defined as leapyear")
{
    bool check = isLeapYear(0);

    REQUIRE(check == false);
}


TEST_CASE("A year divisible by 4 but not 100 is a leapyear")
{
    bool check1 = isLeapYear(4);
    bool check2 = isLeapYear(16);
    bool check3 = isLeapYear(220);

    REQUIRE(check1 == true);
    REQUIRE(check2 == true);
    REQUIRE(check3 == true);
}

TEST_CASE("A year divisible by 100 is not a leapyear")
{
    bool check1 = isLeapYear(100);
    bool check2 = isLeapYear(500);
    bool check3 = isLeapYear(2100);

    REQUIRE(check1 == false);
    REQUIRE(check2 == false);
    REQUIRE(check3 == false);
}

TEST_CASE("A year divisible by 400 is a leapyear")
{
    bool check1 = isLeapYear(400);
    bool check2 = isLeapYear(1200);
    bool check3 = isLeapYear(2000);

    REQUIRE(check1 == true);
    REQUIRE(check2 == true);
    REQUIRE(check3 == true);
}