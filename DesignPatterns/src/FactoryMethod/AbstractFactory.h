#pragma once

#include "AbstractCar.h"
class AbstractFactory
{
public:
	AbstractFactory();
	~AbstractFactory();

	virtual AbstractCar* get_car() = 0;
};

