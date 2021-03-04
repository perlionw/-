#include "Door.h"
Door::Door()
{

}

Door::~Door()
{
}

std::shared_ptr<Door> Door::clone()
{
	return std::make_shared<Door>(*this);
}

void Door::initialize(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{

}
