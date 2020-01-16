#ifndef _DOTS_AND_BOXES_H_
#define _DOTS_AND_BOXES_H_

#include "edge.h"
#include "std.h"

// Represents a position in Dots and Boxes.
class DotsAndBoxes {
public:
  // Initialize a new game.
  DotsAndBoxes(int n, int m);

private:
  vector<int> squares;
  vector<Edge> edges;
};

#endif
