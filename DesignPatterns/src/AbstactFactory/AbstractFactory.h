#pragma once

#include "AbstractCar.h"
#include "AbstractTire.h"
class AbstractFactory
{
public:
	AbstractFactory();
	~AbstractFactory();

	virtual AbstractCar* get_car() = 0;

	virtual AbstractTire* get_tire() = 0;
};

