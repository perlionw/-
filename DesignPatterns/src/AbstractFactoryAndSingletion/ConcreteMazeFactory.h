#pragma once
#include "MazeFactory.h"
#include <iostream>
class ConcreteMazeFactory :
	public MazeFactory
{
public:
	ConcreteMazeFactory();
	~ConcreteMazeFactory();

	virtual std::shared_ptr<Wall> GetWall(const std::string& class_name);
	virtual std::shared_ptr<Room> GetRoom(const std::string& class_name, int n);
	virtual std::shared_ptr<Door> GetDoor(const std::string& class_name, std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);
};

