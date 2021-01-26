#include "EnchantedMazeFactory.h"
#include "EnchantedDoor.h"
#include "EnchantedMaze.h"
#include "EnchantedRoom.h"
#include "EnchantedWall.h"
#include <iostream>
#include <string>
EnchantedMazeFactory::EnchantedMazeFactory()
{
}


EnchantedMazeFactory::~EnchantedMazeFactory()
{
}

std::shared_ptr<Maze> EnchantedMazeFactory::MakeMaze()
{
	std::cout << "����һ��" + std::string(typeid(*this).name()) + "�Թ�" << std::endl;
	return std::make_shared<EnchantedMaze>();
}

std::shared_ptr<Wall> EnchantedMazeFactory::MakeWall()
{
	std::cout << "����һ��" + std::string(typeid(*this).name()) + "ǽ" << std::endl;
	return std::make_shared<EnchantedWall>();
}

std::shared_ptr<Room> EnchantedMazeFactory::MakeRoom(int n)
{
	std::cout << "����һ��" + std::string(typeid(*this).name()) + "����" << std::endl;
	return std::make_shared<EnchantedRoom>(n);
}

std::shared_ptr<Door> EnchantedMazeFactory::MakeDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{
	std::cout << "����һ��" + std::string(typeid(*this).name()) + "��" << std::endl;
	return std::make_shared<EnchantedDoor>(r1, r2);
}
