#include "AudiFactory.h"


AudiFactory::AudiFactory()
{
}


AudiFactory::~AudiFactory()
{
}

AbstractCar* AudiFactory::get_car()
{
	return new AudiCar;
}

AbstractTire* AudiFactory::get_tire()
{
	return new AudiTire;
}
