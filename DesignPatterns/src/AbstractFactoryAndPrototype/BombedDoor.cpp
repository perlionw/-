#include "BombedDoor.h"

BombedDoor::BombedDoor()
{

}

BombedDoor::~BombedDoor()
{
}

std::shared_ptr<Door> BombedDoor::clone()
{
	return std::make_shared<BombedDoor>(*this);
}

void BombedDoor::initialize(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{

}
