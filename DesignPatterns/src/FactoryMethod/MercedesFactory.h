#pragma once
#include "AbstractFactory.h"
#include "MercedesCar.h"
class MercedesFactory :
	public AbstractFactory
{
public:
	MercedesFactory();
	~MercedesFactory();

	MercedesCar* get_car();
};

