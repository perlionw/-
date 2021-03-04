#include "MazeFactory.h"
#include "Wall.h"
#include "Room.h"
#include "Maze.h"
#include "Door.h"

MazeFactory::MazeFactory()
{
}


MazeFactory::~MazeFactory()
{
}


std::shared_ptr<Maze> MazeFactory::GetMaze()
{
	return std::make_shared<Maze>();
}

std::shared_ptr<Wall> MazeFactory::GetWall(const std::string& class_name)
{
	return std::make_shared<Wall>();
}

std::shared_ptr<Room> MazeFactory::GetRoom(const std::string& class_name, int n)
{
	return std::make_shared<Room>(n); 
}

std::shared_ptr<Door> MazeFactory::GetDoor(const std::string& class_name, std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{
	return std::make_shared<Door>(r1, r2);
}