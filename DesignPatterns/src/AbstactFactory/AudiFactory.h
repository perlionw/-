#pragma once
#include "AbstractFactory.h"
#include "AudiCar.h"
#include "AudiTire.h"
class AudiFactory :
	public AbstractFactory
{
public:
	AudiFactory();
	~AudiFactory();

	AbstractCar* get_car();

	AbstractTire* get_tire();
};

