#include "RoomFactory.h"
#include "EnchantedRoom.h"
#include "BombedRoom.h"


RoomFactory::RoomFactory()
{
}


RoomFactory::~RoomFactory()
{
}

std::shared_ptr<Room> RoomFactory::GetRoom(RoomType type, int n)
{
	switch (type)
	{
		case ENCHANTED2:
			return std::make_shared<EnchantedRoom>(n);
			break;
		case BOMBED2:
			return std::make_shared<BombedRoom>(n);
			break;
		default:
			break;
	}
}
