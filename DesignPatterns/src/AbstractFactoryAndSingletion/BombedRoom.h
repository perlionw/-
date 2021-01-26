#pragma once
#include "Room.h"
class BombedRoom :
	public Room
{
public:
	BombedRoom(int n);
	~BombedRoom();

	virtual void SetSide(ORIENTATION orient, std::shared_ptr<Wall> r);
	virtual void SetSide(ORIENTATION orient, std::shared_ptr<Door> d);
};

