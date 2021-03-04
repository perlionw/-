#pragma once
#include <memory>
class Wall
{
public:
	Wall();
	~Wall();

	virtual void print();

	virtual std::shared_ptr<Wall> clone();
};

