#pragma once
#include "Maze.h"
class BombedMaze :
	public Maze
{
public:
	BombedMaze();
	~BombedMaze();

	virtual void AddRoom(std::shared_ptr<Room> r);
};

