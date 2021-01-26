#include "Wall.h"
#include <iostream>
#include <string>

Wall::Wall()
{
}


Wall::~Wall()
{
}

void Wall::print()
{
	std::cout << std::string(typeid(*this).name()) << std::endl;
}
