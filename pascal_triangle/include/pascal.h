#pragma once

#include <string>

using namespace std;

/// @brief Generates Pascal's triangle up to the specified number of lines.
/// @param number The number of lines to generate.
/// @param errorFlag Flags -1: no argument passed, 0: Zero passed, 1: no errors
/// @return A string representation of Pascal's triangle or an error message if the input is invalid.
std::string pascalsTriangle(const int number, const int errorFlag);

/// @brief Generates a single row of Pascal's triangle with proper padding between numbers.
/// @param width The width allocated for each number, including spacing.
/// @param n The row number (zero-indexed) to generate.
/// @return A string representing the row with padded numbers.
std::string paddingNumbers(const int width, const int n);

/// @brief Generates the full Pascal's triangle with proper padding for centering.
/// @param number The number of lines to generate.
/// @param width The width allocated for each number, including spacing.
/// @return A string representing the fully padded Pascal's triangle.
std::string paddingTriangle(const int number, const int width);

/// @brief Calculates the binomial coefficient (n choose k).
/// @param n The total number of items.
/// @param k The number of items to choose.
/// @return The binomial coefficient, calculated as n! / (k! * (n - k)!).
unsigned long long binomialCoeff(const int n, const int k);
