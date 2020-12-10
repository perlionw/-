#pragma once
#include "AbstractCar.h"

enum CARTYPE
{
	AUDI,
	MERCEDES,
	HONGQI
};

class CarFactory
{
public:
	CarFactory(CARTYPE type);
	~CarFactory();

	void move();

private:
	AbstractCar* m_car;
};

