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

std::shared_ptr<Wall> MazeFactory::GetWall(WallType type)
{
	return std::make_shared<Wall>();
}

std::shared_ptr<Room> MazeFactory::GetRoom(RoomType type, int n)
{
	return std::make_shared<Room>(n); 
}

std::shared_ptr<Door> MazeFactory::GetDoor(DoorType type, std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{
	return std::make_shared<Door>(r1, r2);
}