#include "MazeGame.h"
#include "RoomFactory.h"
#include "WallFactory.h"
#include "DoorFactory.h"
#include "Room.h"
#include "Wall.h"
#include "Door.h"
#include "Maze.h"
#include "ConcreteMazeFactory.h"
MazeGame::MazeGame(MazeFactoryType type)
{
	switch (type)
	{
		case ROOM:
			m_maze_factory = std::make_shared<ConcreteMazeFactory>();
			break;
		case DOOR:
			m_maze_factory = std::make_shared<DoorFactory>();
			break;
		case WALL:
			m_maze_factory = std::make_shared<WallFactory>();
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
	std::shared_ptr<Room> p_room1 = m_maze_factory->GetRoom(RoomType::ENCHANTED2, 1);
	std::shared_ptr<Room> p_room2 = m_maze_factory->GetRoom(RoomType::BOMBED2, 2);
	std::shared_ptr<Door> p_door = m_maze_factory->GetDoor(DoorType::BOMBED3, p_room1, p_room2);

	p_maze->AddRoom(p_room1);
	p_maze->AddRoom(p_room2);

	p_room1->SetSide(NORTH, m_maze_factory->GetWall(WallType::BOMBED1));
	p_room1->SetSide(EAST, p_door);
	p_room1->SetSide(SOUTH, m_maze_factory->GetWall(WallType::ENCHANTED1));
	p_room1->SetSide(WEST, m_maze_factory->GetWall(WallType::ENCHANTED1));

	p_room2->SetSide(NORTH, m_maze_factory->GetWall(WallType::ENCHANTED1));
	p_room2->SetSide(EAST, m_maze_factory->GetWall(WallType::ENCHANTED1));
	p_room2->SetSide(SOUTH, m_maze_factory->GetWall(WallType::ENCHANTED1));
	p_room2->SetSide(WEST, p_door);

	return p_maze;

}
