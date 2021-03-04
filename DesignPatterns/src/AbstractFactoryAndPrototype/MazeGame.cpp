#include "MazeGame.h"
#include "Room.h"
#include "Wall.h"
#include "Door.h"
#include "Maze.h"
#include "EnchantedRoom.h"
#include "BombedWall.h"
#include "EnchantedDoor.h"
#include "EnchantedWall.h"
#include "MazeFactory.h"
#include "BombedRoom.h"
MazeGame::MazeGame(MazeFactoryType type)
{
	switch (type)
	{
		case ROOM:
			m_maze_factory = std::make_shared<MazeFactory>(std::shared_ptr<Wall>(new EnchantedWall), std::shared_ptr<Room>(new BombedRoom), std::shared_ptr<Door>(new EnchantedDoor));
			break;
		default:
			break;
	}
}


MazeGame::~MazeGame()
{
}

std::shared_ptr<Maze> MazeGame::CreateMaze()
{
	std::shared_ptr<Maze> p_maze = m_maze_factory->GetMaze();
	std::shared_ptr<Room> p_room1 = m_maze_factory->GetRoom(1);
	std::shared_ptr<Room> p_room2 = m_maze_factory->GetRoom(2);
	std::shared_ptr<Door> p_door = m_maze_factory->GetDoor(p_room1, p_room2);

	p_maze->AddRoom(p_room1);
	p_maze->AddRoom(p_room2);

	p_room1->SetSide(NORTH, m_maze_factory->GetWall());
	p_room1->SetSide(EAST, p_door);
	p_room1->SetSide(SOUTH, m_maze_factory->GetWall());
	p_room1->SetSide(WEST, m_maze_factory->GetWall());

	p_room2->SetSide(NORTH, m_maze_factory->GetWall());
	p_room2->SetSide(EAST, m_maze_factory->GetWall());
	p_room2->SetSide(SOUTH, m_maze_factory->GetWall());
	p_room2->SetSide(WEST, p_door);

	return p_maze;

}
