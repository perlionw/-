#include "BombedWall.h"
#include <iostream>
#include <string>

BombedWall::BombedWall()
{
}


BombedWall::~BombedWall()
{
}

void BombedWall::print()
{
	std::cout << std::string(typeid(*this).name()) << std::endl;
}

std::shared_ptr<Wall> BombedWall::clone()
{
	return std::make_shared<BombedWall>(*this);
}
