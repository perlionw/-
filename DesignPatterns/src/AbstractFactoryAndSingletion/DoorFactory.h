#pragma once
#include <memory>
#include "MazeFactory.h"
#include "BasicDefine.h"
class Door;
class Room;

class DoorFactory : public MazeFactory
{
public:



	DoorFactory();
	~DoorFactory();

	std::shared_ptr<Door> GetDoor(DoorType type, std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);


};

