#pragma once
#include <memory>
class Wall;
class Door;
enum ORIENTATION
{
	NORTH,
	EAST,
	SOUTH,
	WEST
};



class Room
{
public:


	Room();

	~Room();

	virtual void initialize(int n);

	virtual void SetSide(ORIENTATION orient, std::shared_ptr<Wall> r);
	virtual void SetSide(ORIENTATION orient, std::shared_ptr<Door> r);

	virtual std::shared_ptr<Room> clone();

private:
	int n;
};

