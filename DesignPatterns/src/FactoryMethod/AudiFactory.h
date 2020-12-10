#pragma once
#include "AbstractFactory.h"
#include "AudiCar.h"
class AudiFactory :
	public AbstractFactory
{
public:
	AudiFactory();
	~AudiFactory();

	AbstractCar* get_car();
};

