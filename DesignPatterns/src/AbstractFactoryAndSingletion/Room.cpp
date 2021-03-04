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
			std::cout << std::string(typeid(*this).name()) + "������һ��"  << "ǽ" << std::endl;
			break;
		case EAST:
			std::cout << std::string(typeid(*this).name()) + "������һ��ǽ" << std::endl;
			break;
		case SOUTH:
			std::cout << std::string(typeid(*this).name()) + "�ϱ���һ��ǽ" << std::endl;
			break;
		case WEST:
			std::cout << std::string(typeid(*this).name()) + "��������һ��ǽ" << std::endl;
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
			std::cout << std::string(typeid(*this).name()) + "���߼�һ����" << std::endl;
			break;
		case EAST:
			std::cout << std::string(typeid(*this).name()) + "���߼�һ����" << std::endl;
			break;
		case SOUTH:
			std::cout << std::string(typeid(*this).name()) + "�ϱ߼�һ����" << std::endl;
			break;
		case WEST:
			std::cout << std::string(typeid(*this).name()) + "���߼�һ����" << std::endl;
			break;
		default:
			break;
	}
}
