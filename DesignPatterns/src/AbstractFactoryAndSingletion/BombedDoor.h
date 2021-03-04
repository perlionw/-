#pragma once
#include "Door.h"
class BombedDoor :
	public Door
{
public:
	BombedDoor();
	BombedDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);
	~BombedDoor();
};

