#pragma once
#include "AbstractCar.h"
class AudiCar :
	public AbstractCar
{
public:
	AudiCar();
	~AudiCar();

	virtual void move();

	virtual void stop();
};

