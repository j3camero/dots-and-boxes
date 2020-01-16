#ifndef _EDGE_H_
#define _EDGE_H_

// Represents one of the playable edges between squares.
class Edge {
public:
  // Initialize a new edge.
  Edge(int first, int second);

  // The two square numbers adjacent to this edge.
  int first;
  int second;

  // True if the edge is still available to play. False if already taken.
  bool playable;
};

#endif
