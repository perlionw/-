#include "BombedMazeFactory.h"
#include "BombedMaze.h"
#include "BombedDoor.h"
#include "BombedWall.h"
#include "BombedRoom.h"
#include <iostream>
#include <string>
BombedMazeFactory::BombedMazeFactory()
{
}


BombedMazeFactory::~BombedMazeFactory()
{
}

std::shared_ptr<Maze> BombedMazeFactory::MakeMaze()
{
	std::cout << "����һ��" + std::string(typeid(*this).name()) + "�Թ�" << std::endl;
	return std::make_shared<BombedMaze>();
}

std::shared_ptr<Wall> BombedMazeFactory::MakeWall()
{
	std::cout << "����һ��" + std::string(typeid(*this).name()) + "ǽ" << std::endl;
	return std::make_shared<BombedWall>();
}

std::shared_ptr<Room> BombedMazeFactory::MakeRoom(int n)
{
	std::cout << "����һ��" + std::string(typeid(*this).name()) + "����" << std::endl;
	return std::make_shared<BombedRoom>(n);
}

std::shared_ptr<Door> BombedMazeFactory::MakeDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{
	std::cout << "����һ��" + std::string(typeid(*this).name()) + "��" << std::endl;
	return std::make_shared<BombedDoor>(r1, r2);
}
