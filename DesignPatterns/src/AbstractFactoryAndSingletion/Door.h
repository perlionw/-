#pragma once
#include <memory>
class Room;

class Door
{
public:
	Door();
	Door(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);
	~Door();
};

