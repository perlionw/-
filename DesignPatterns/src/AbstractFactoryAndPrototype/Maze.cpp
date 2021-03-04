#include "Maze.h"
#include <iostream>
#include <string>
Maze::Maze()
{
}


Maze::~Maze()
{
}

void Maze::AddRoom(std::shared_ptr<Room> r)
{
	std::cout << std::string(typeid(*this).name()) + "添加一个房间" << std::endl;
}
