#pragma once
#include "MazeFactory.h"

class EnchantedMazeFactory :
	public MazeFactory
{
	IMPLEMENTION_SINGLETON_CLASS(EnchantedMazeFactory)
private:
	EnchantedMazeFactory();
	~EnchantedMazeFactory();

	virtual std::shared_ptr<Maze> MakeMaze();
	virtual std::shared_ptr<Wall> MakeWall();
	virtual std::shared_ptr<Room> MakeRoom(int n);
	virtual std::shared_ptr<Door> MakeDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);

};

