#pragma once
#include <memory>
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
	MazeFactory();
	~MazeFactory();

	virtual std::shared_ptr<Maze> GetMaze();
	virtual std::shared_ptr<Wall> GetWall(WallType type);
	virtual std::shared_ptr<Room> GetRoom(RoomType type, int n);
	virtual std::shared_ptr<Door> GetDoor(DoorType type, std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);
	
};

