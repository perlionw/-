#pragma once
#include "Door.h"
class EnchantedDoor :
	public Door
{
public:
	EnchantedDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);
	~EnchantedDoor();
};

