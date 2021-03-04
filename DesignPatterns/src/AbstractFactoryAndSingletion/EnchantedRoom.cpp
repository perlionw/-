#include "EnchantedRoom.h"
#include <iostream>
#include <string>
EnchantedRoom::EnchantedRoom(int n) : Room(n)
{
}


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
