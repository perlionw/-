#pragma once
#include "AbstractCar.h"
class MercedesCar :
	public AbstractCar
{
public:
	MercedesCar();
	~MercedesCar();

	virtual void move();

	virtual void stop();
};

