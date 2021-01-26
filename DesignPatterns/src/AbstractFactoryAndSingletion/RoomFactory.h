#pragma once
#include <memory>
#include "MazeFactory.h"
#include "BasicDefine.h"
class Room;
class RoomFactory : public MazeFactory
{

public:

	RoomFactory();
	~RoomFactory();

	std::shared_ptr<Room> GetRoom(RoomType type, int n);
};

