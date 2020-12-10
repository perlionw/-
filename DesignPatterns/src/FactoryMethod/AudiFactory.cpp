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
