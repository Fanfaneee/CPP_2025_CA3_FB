#include <iostream>
#ifndef CRAWLER_H
#define CRAWLER_H
#endif //CRAWLER_H
using namespace std;



Struct Position {
  int x;
  int y;
  }

enum class Direction {
    North = 1,
    East = 2,
    South = 3,
    West = 4
};

class Crawler {


    public:

    int id;
    Position position;
    Direction direction;
    int size;
    list<Position> path;

    move();
    bool isWayBlocked() const;



}