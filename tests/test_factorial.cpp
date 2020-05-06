#include "doctest.h"

#include "factorial.hpp"

TEST_CASE("negative numbers") {
    REQUIRE(factorial(-10) == 0);
}

TEST_CASE("zero") {
    REQUIRE(factorial(0) == 0);
}

TEST_CASE("positive numbers") {
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(4) == 24);
}