#pragma once
#include "Room.h"
class BombedRoom :
	public Room
{
public:
	BombedRoom();
	~BombedRoom();

	virtual void SetSide(ORIENTATION orient, std::shared_ptr<Wall> r);
	virtual void SetSide(ORIENTATION orient, std::shared_ptr<Door> d);

	virtual void initialize(int n);

	virtual std::shared_ptr<Room> clone();
};

