#include "EnchantedDoor.h"


EnchantedDoor::EnchantedDoor()
{

}

EnchantedDoor::~EnchantedDoor()
{
}

std::shared_ptr<Door> EnchantedDoor::clone()
{
	return std::make_shared<EnchantedDoor>(*this);
}

void EnchantedDoor::initialize(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{

}
