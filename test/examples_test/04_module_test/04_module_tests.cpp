#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Varify sum of squares function")
{
	REQUIRE(sum_of_squares(3) == 14);
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(5) == 55);
}

TEST_CASE("Varify sum of squares function 2")
{
	REQUIRE(sum_of_squares_2(3) == 14);
	REQUIRE(sum_of_squares_2(4) == 30);
	REQUIRE(sum_of_squares_2(5) == 55);
}

