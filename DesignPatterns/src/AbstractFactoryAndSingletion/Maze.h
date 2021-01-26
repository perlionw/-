#pragma once
#include <memory>

class Room;
class Maze
{
public:
	Maze();
	~Maze();

	virtual void AddRoom(std::shared_ptr<Room> r);
};

