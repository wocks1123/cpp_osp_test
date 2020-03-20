#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "Project1/Test.hpp"

TEST_CASE("Simple test")
{
    CHECK(Add(2, 3) == 5);
}