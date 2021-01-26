#include "EnchantedMaze.h"
#include <iostream>
#include <string>
EnchantedMaze::EnchantedMaze()
{
}


EnchantedMaze::~EnchantedMaze()
{
}

void EnchantedMaze::AddRoom(std::shared_ptr<Room> r)
{
	Maze::AddRoom(r);
}
