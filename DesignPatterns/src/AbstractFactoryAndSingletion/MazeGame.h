#pragma once
#include <memory>
class MazeFactory;
class Maze;
enum MazeFactoryType
{
	ROOM,
	WALL,
	DOOR
};
class MazeGame
{
public:
	MazeGame(MazeFactoryType type);
	~MazeGame();

	std::shared_ptr<Maze> CreateMaze();

private:
	std::shared_ptr<MazeFactory> m_maze_factory;
};

