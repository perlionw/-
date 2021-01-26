#pragma once
#include "Maze.h"
class EnchantedMaze :
	public Maze
{
public:
	EnchantedMaze();
	~EnchantedMaze();

	virtual void AddRoom(std::shared_ptr<Room> r);
};

