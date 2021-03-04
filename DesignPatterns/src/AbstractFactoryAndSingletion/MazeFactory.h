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
	MazeFactory();
	~MazeFactory();

	virtual std::shared_ptr<Maze> GetMaze();
	virtual std::shared_ptr<Wall> GetWall(const std::string& class_name);
	virtual std::shared_ptr<Room> GetRoom(const std::string& class_name, int n);
	virtual std::shared_ptr<Door> GetDoor(const std::string& class_name, std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);
	
};

