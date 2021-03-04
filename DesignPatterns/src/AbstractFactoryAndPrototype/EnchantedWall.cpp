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

std::shared_ptr<Wall> EnchantedWall::clone()
{
	return std::make_shared<EnchantedWall>(*this);
}
