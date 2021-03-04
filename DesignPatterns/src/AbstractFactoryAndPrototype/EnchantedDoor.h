#pragma once
#include "Door.h"
class EnchantedDoor :
	public Door
{
public:
	EnchantedDoor();
	~EnchantedDoor();

	virtual std::shared_ptr<Door> clone();
	virtual void initialize(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);
};

