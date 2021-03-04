#include "BombedRoom.h"
#include <iostream>
#include <string>
BombedRoom::BombedRoom()
{

}

BombedRoom::~BombedRoom()
{
}

void BombedRoom::SetSide(ORIENTATION orient, std::shared_ptr<Wall> r)
{
	Room::SetSide(orient, r);
}

void BombedRoom::SetSide(ORIENTATION orient, std::shared_ptr<Door> d)
{
	Room::SetSide(orient, d);
}

void BombedRoom::initialize(int n)
{
	
}

std::shared_ptr<Room> BombedRoom::clone()
{
	return std::make_shared<BombedRoom>(*this);
}
