#pragma once
#include "AbstractCar.h"
class HongqiCar :
	public AbstractCar
{
public:
	HongqiCar();
	~HongqiCar();

	virtual void move();

	virtual void stop();
};

