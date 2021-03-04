#include "EnchantedRoom.h"
#include <iostream>
#include <string>
EnchantedRoom::EnchantedRoom()
{

}

EnchantedRoom::~EnchantedRoom()
{
}

void EnchantedRoom::SetSide(ORIENTATION orient, std::shared_ptr<Wall> r)
{
	Room::SetSide(orient, r);
}

void EnchantedRoom::SetSide(ORIENTATION orient, std::shared_ptr<Door> d)
{
	Room::SetSide(orient, d);
}

void EnchantedRoom::initialize(int n)
{

}

std::shared_ptr<Room> EnchantedRoom::clone()
{
	return std::make_shared<EnchantedRoom>(*this);
}
