#include "ConcreteMazeFactory.h"
#include "EnchantedRoom.h"
#include "BombedRoom.h"
#include "EnchantedDoor.h"
#include "BombedDoor.h"
#include "EnchantedWall.h"
#include "BombedWall.h"

ConcreteMazeFactory::ConcreteMazeFactory()
{
}


ConcreteMazeFactory::~ConcreteMazeFactory()
{
}

std::shared_ptr<Wall> ConcreteMazeFactory::GetWall(WallType type)
{
	switch (type)
	{
		case ENCHANTED1:
			return std::make_shared<EnchantedWall>();
			break;
		case BOMBED1:
			return std::make_shared<BombedWall>();
			break;
		default:
			break;
	}
}

std::shared_ptr<Room> ConcreteMazeFactory::GetRoom(RoomType type, int n)
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

std::shared_ptr<Door> ConcreteMazeFactory::GetDoor(DoorType type, std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
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
