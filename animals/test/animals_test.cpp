#include <catch2/catch.hpp>
#include <animals.h>

TEST_CASE("Animals knows its name:")
{
    animal uut("Bello");
    REQUIRE("Bello" == uut.GetName());
}