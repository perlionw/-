#include "WallFactory.h"
#include "EnchantedWall.h"
#include "BombedWall.h"

WallFactory::WallFactory()
{
}


WallFactory::~WallFactory()
{
}

std::shared_ptr<Wall> WallFactory::GetWall(WallType type)
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
