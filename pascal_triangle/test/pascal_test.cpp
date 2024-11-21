#include <catch2/catch.hpp>
#include "pascal.h"

TEST_CASE("Valid input - small number") {
    std::string result = pascalsTriangle(5, 1);
    std::string expected =
        "    1\n"
        "   1 1\n"
        "  1 2 1\n"
        " 1 3 3 1\n"
        "1 4 6 4 1\n";
    REQUIRE(result == expected);
}

TEST_CASE("Negative input") {
    std::string result = pascalsTriangle(-10, 1);
    REQUIRE(result == "Pascals Triangle cannot be negative!\n");
}

TEST_CASE("Zero input. Default behavior - 10 rows") {
    std::string result = pascalsTriangle(10, 0);
        std::string expected =
        "No valid argument passed (0 lines cannot be displayed). Using 10 as default\n\n"
        "                  1\n"
        "                1   1\n"
        "              1   2   1\n"
        "            1   3   3   1\n"
        "          1   4   6   4   1\n"
        "        1   5   10  10  5   1\n"
        "      1   6   15  20  15  6   1\n"
        "    1   7   21  35  35  21  7   1\n"
        "  1   8   28  56  70  56  28  8   1\n"
        "1   9   36  84  126 126 84  36  9   1\n";
    REQUIRE(result == expected);
}

TEST_CASE("Input exceeds maximum allowed") {
    std::string result = pascalsTriangle(55, 1);
    REQUIRE(result == "Number exceeds the allowed limit of lines!\n");
}

TEST_CASE("No argument passed. Default behavior - 10 rows") {
    std::string result = pascalsTriangle(10, -1);
    std::string expected =
        "No argument passed. Using 10 as default\n\n"
        "                  1\n"
        "                1   1\n"
        "              1   2   1\n"
        "            1   3   3   1\n"
        "          1   4   6   4   1\n"
        "        1   5   10  10  5   1\n"
        "      1   6   15  20  15  6   1\n"
        "    1   7   21  35  35  21  7   1\n"
        "  1   8   28  56  70  56  28  8   1\n"
        "1   9   36  84  126 126 84  36  9   1\n";
    REQUIRE(result == expected);
}

TEST_CASE("Could not convert string into integer") {
    std::string result = pascalsTriangle(0, 1);
    REQUIRE(result == "Error could not convert string into a number!\n");
}

