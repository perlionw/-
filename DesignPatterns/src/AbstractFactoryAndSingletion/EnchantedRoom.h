#pragma once
#include "Room.h"
class EnchantedRoom :
	public Room
{
public:
	EnchantedRoom(int n);
	~EnchantedRoom();

	virtual void SetSide(ORIENTATION orient, std::shared_ptr<Wall> r);
	virtual void SetSide(ORIENTATION orient, std::shared_ptr<Door> d);
};

