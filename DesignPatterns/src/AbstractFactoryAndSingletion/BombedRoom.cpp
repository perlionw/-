#include "BombedRoom.h"
#include <iostream>
#include <string>
BombedRoom::BombedRoom(int n) : Room(n)
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
