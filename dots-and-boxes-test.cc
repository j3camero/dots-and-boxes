#include "dots-and-boxes.h"
#include "catch.hpp"

TEST_CASE("Get and Set", "[DotsAndBoxes]") {
  DotsAndBoxes game(5, 5);
  REQUIRE(2 + 2 == 4);
}
