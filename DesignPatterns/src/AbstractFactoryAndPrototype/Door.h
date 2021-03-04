#pragma once
#include <memory>
class Room;

class Door
{
public:
	Door();
	~Door();

	virtual std::shared_ptr<Door> clone();
	virtual void initialize(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);

	
};

