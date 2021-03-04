#pragma once
#include "Wall.h"
class BombedWall :
	public Wall
{
public:
	BombedWall();
	~BombedWall();

	virtual void print();

	virtual std::shared_ptr<Wall> clone();
};

