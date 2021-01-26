#include "DoorFactory.h"
#include "EnchantedDoor.h"
#include "BombedDoor.h"

DoorFactory::DoorFactory()
{
}


DoorFactory::~DoorFactory()
{
}

std::shared_ptr<Door> DoorFactory::GetDoor(DoorType type, std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{
	switch (type)
	{
		case ENCHANTED3:
			return std::make_shared<EnchantedDoor>(r1, r2);
			break;
		case BOMBED3:
			return std::make_shared<BombedDoor>(r1, r2);
			break;
		default:
			break;
	}
	return NULL;
}
