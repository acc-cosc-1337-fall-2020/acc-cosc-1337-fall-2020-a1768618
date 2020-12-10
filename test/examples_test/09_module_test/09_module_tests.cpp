#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Reference and pointer function parameters")
{
	int n1 = 5, n2 = 10;

	ref_param(n1, &n2);

	REQUIRE(n1 == 100);
	REQUIRE(n2 == 200);
}


TEST_CASE("Test create new Vector from an existing vector instance check size")
{
	Vector v1(3);
    Vector v2 = v1;

	REQUIRE(v1.Size() == v2.Size());
}

TEST_CASE("Test create new Vector from an existing vector instance check elements")
{
	Vector v1(3);
    Vector v2 = v1;
	v1[0] = 5;

	REQUIRE(v1[0] != v2[0]);
}

TEST_CASE("Test overwrite new Vector from an existing vector instance check elements")
{
	Vector v3(3);
	Vector v4(3);

    v4 = v3;
	v3[0] = 5;

	REQUIRE(v4[0] != v3[0]);
}

