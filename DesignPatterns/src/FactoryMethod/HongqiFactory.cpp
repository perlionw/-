#include "HongqiFactory.h"


HongqiFactory::HongqiFactory()
{
}


HongqiFactory::~HongqiFactory()
{
}

AbstractCar* HongqiFactory::get_car()
{
	return new HongqiCar;
}
