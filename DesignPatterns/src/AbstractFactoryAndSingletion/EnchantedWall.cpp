#include "EnchantedWall.h"
#include <iostream>
#include <string>

EnchantedWall::EnchantedWall()
{
}


EnchantedWall::~EnchantedWall()
{
}

void EnchantedWall::print()
{
	std::cout << std::string(typeid(*this).name()) << std::endl;
}
