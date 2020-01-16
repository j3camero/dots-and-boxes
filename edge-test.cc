#include "edge.h"
#include "catch.hpp"

TEST_CASE("Edge constructor", "[Edge]") {
  Edge e(4, 7);
  REQUIRE(e.first == 4);
  REQUIRE(e.second == 7);
  REQUIRE(e.playable);
  e.playable = false;
  REQUIRE(!e.playable);
}
