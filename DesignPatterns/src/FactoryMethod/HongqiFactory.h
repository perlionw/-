#pragma once
#include "AbstractFactory.h"
#include "HongqiCar.h"
class HongqiFactory :
	public AbstractFactory
{
public:
	HongqiFactory();
	~HongqiFactory();

	virtual AbstractCar* get_car();
};

