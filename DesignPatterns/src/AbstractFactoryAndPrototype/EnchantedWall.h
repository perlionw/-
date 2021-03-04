#pragma once
#include "Wall.h"
class EnchantedWall :
	public Wall
{
public:
	EnchantedWall();
	~EnchantedWall();

	virtual void print();

	virtual std::shared_ptr<Wall> clone();
};

