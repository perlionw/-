#include "Room.h"
#include <iostream>
#include <string>
#include "Wall.h"
Room::Room(int n)
{
}


Room::Room()
{

}

Room::~Room()
{
}

void Room::SetSide(ORIENTATION orient, std::shared_ptr<Wall> r)
{
	switch (orient)
	{
		case NORTH:
			r->print();
			std::cout << std::string(typeid(*this).name()) + "北边添一堵"  << "墙" << std::endl;
			break;
		case EAST:
			std::cout << std::string(typeid(*this).name()) + "东边添一堵墙" << std::endl;
			break;
		case SOUTH:
			std::cout << std::string(typeid(*this).name()) + "南边添一堵墙" << std::endl;
			break;
		case WEST:
			std::cout << std::string(typeid(*this).name()) + "间西边添一堵墙" << std::endl;
			break;
		default:
			break;
	}
}

void Room::SetSide(ORIENTATION orient, std::shared_ptr<Door> r)
{
	switch (orient)
	{
		case NORTH:
			std::cout << std::string(typeid(*this).name()) + "北边加一扇门" << std::endl;
			break;
		case EAST:
			std::cout << std::string(typeid(*this).name()) + "东边加一扇门" << std::endl;
			break;
		case SOUTH:
			std::cout << std::string(typeid(*this).name()) + "南边加一扇门" << std::endl;
			break;
		case WEST:
			std::cout << std::string(typeid(*this).name()) + "西边加一扇门" << std::endl;
			break;
		default:
			break;
	}
}
