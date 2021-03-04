#include "MazeFactory.h"
#include "Wall.h"
#include "Room.h"
#include "Maze.h"
#include "Door.h"

MazeFactory::MazeFactory(std::shared_ptr<Wall> wall, std::shared_ptr<Room> room, std::shared_ptr<Door> door) : m_wall(wall), m_room(room), m_door(door)
{
}


MazeFactory::~MazeFactory()
{
}


std::shared_ptr<Maze> MazeFactory::GetMaze()
{
	return std::make_shared<Maze>();
}

std::shared_ptr<Wall> MazeFactory::GetWall()
{
// 	std::shared_ptr<Wall> wall = m_wall->clone();
// 	return wall;
	return m_wall;
}

std::shared_ptr<Room> MazeFactory::GetRoom(int n)
{
	//std::shared_ptr<Room> room = m_room->clone();
	//room->initialize(n);
	//return room;

	m_room->initialize(n);
	return m_room;
}

std::shared_ptr<Door> MazeFactory::GetDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{
	//std::shared_ptr<Door> door = m_door->clone();
	//door->initialize(r1, r2);
	//return door;

	m_door->initialize(r1, r2);
	return m_door;
}
