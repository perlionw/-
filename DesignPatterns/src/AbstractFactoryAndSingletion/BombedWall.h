#pragma once
#include "Wall.h"
class BombedWall :
	public Wall
{
public:
	BombedWall();
	~BombedWall();

	virtual void print();
};

