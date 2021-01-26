#include "BombedMaze.h"
#include <iostream>
#include <string>
BombedMaze::BombedMaze()
{
}


BombedMaze::~BombedMaze()
{
}

void BombedMaze::AddRoom(std::shared_ptr<Room> r)
{
	Maze::AddRoom(r);
}
