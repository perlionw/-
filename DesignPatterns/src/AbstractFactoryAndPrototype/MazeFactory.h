#pragma once
#include <memory>
#include <iostream>
#include "BasicDefine.h"
//¶öººÊ½µ¥ÀýÉùÃ÷
#define IMPLEMENTION_SINGLETON_CLASS( Type ) \
public:                                    \
	static Type* GetInstance()               \
{                                        \
	static Type oInstance;               \
	return &oInstance;                   \
}                                        \
private:                                     \
	Type(const Type&)                      \
{                                        \
}                                        \
	\
	Type& operator= (const Type&)          \
{                                        \
	return *this;                        \
}

class Maze;
class Wall;
class Room;
class Door;
class MazeFactory
{
public:
	MazeFactory(std::shared_ptr<Wall> wall, std::shared_ptr<Room> room, std::shared_ptr<Door> door);
	~MazeFactory();

	virtual std::shared_ptr<Maze> GetMaze();
	virtual std::shared_ptr<Wall> GetWall();
	virtual std::shared_ptr<Room> GetRoom(int n);
	virtual std::shared_ptr<Door> GetDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);

private:
	std::shared_ptr<Wall> m_wall;
	std::shared_ptr<Room> m_room;
	std::shared_ptr<Door> m_door;
	
};

