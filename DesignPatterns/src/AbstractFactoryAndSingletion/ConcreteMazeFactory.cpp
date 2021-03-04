#include "ConcreteMazeFactory.h"
#include "EnchantedRoom.h"
#include "BombedRoom.h"
#include "EnchantedDoor.h"
#include "BombedDoor.h"
#include "EnchantedWall.h"
#include "BombedWall.h"
#include "ObjectFactory.hpp"

REGISTER_CLASS(EnchantedWall)
REGISTER_CLASS(BombedWall)
REGISTER_CLASS(EnchantedRoom)
REGISTER_CLASS(BombedRoom)
REGISTER_CLASS(BombedDoor)
REGISTER_CLASS(EnchantedDoor)
ConcreteMazeFactory::ConcreteMazeFactory()
{
}


ConcreteMazeFactory::~ConcreteMazeFactory()
{
}

std::shared_ptr<Wall> ConcreteMazeFactory::GetWall(const std::string& class_name)
{
	return std::shared_ptr<Wall>(static_cast<Wall*>(CObjectFactory::createObject(class_name)));
}

std::shared_ptr<Room> ConcreteMazeFactory::GetRoom(const std::string& class_name, int n)
{
	return std::shared_ptr<Room>(static_cast<Room*>(CObjectFactory::createObject(class_name)));
}

std::shared_ptr<Door> ConcreteMazeFactory::GetDoor(const std::string& class_name, std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{
	return std::shared_ptr<Door>(static_cast<Door*>(CObjectFactory::createObject(class_name)));
}
