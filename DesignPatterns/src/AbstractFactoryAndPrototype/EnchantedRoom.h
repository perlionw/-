#pragma once
#include "Room.h"
class EnchantedRoom :
	public Room
{
public:
	EnchantedRoom();
	~EnchantedRoom();

	virtual void SetSide(ORIENTATION orient, std::shared_ptr<Wall> r);
	virtual void SetSide(ORIENTATION orient, std::shared_ptr<Door> d);
	
	virtual void initialize(int n);

	virtual std::shared_ptr<Room> clone();
};

