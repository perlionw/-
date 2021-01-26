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
	std::cout << "创建一个" + std::string(typeid(*this).name()) + "迷宫" << std::endl;
	return std::make_shared<BombedMaze>();
}

std::shared_ptr<Wall> BombedMazeFactory::MakeWall()
{
	std::cout << "创建一堵" + std::string(typeid(*this).name()) + "墙" << std::endl;
	return std::make_shared<BombedWall>();
}

std::shared_ptr<Room> BombedMazeFactory::MakeRoom(int n)
{
	std::cout << "创建一个" + std::string(typeid(*this).name()) + "房间" << std::endl;
	return std::make_shared<BombedRoom>(n);
}

std::shared_ptr<Door> BombedMazeFactory::MakeDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{
	std::cout << "创建一扇" + std::string(typeid(*this).name()) + "门" << std::endl;
	return std::make_shared<BombedDoor>(r1, r2);
}
