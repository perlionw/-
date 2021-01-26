#pragma once
#include "MazeFactory.h"
class ConcreteMazeFactory :
	public MazeFactory
{
public:
	ConcreteMazeFactory();
	~ConcreteMazeFactory();

	virtual std::shared_ptr<Wall> GetWall(WallType type);
	virtual std::shared_ptr<Room> GetRoom(RoomType type, int n);
	virtual std::shared_ptr<Door> GetDoor(DoorType type, std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);
};

