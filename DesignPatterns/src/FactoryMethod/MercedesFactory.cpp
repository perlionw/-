#include "MercedesFactory.h"


MercedesFactory::MercedesFactory()
{
}


MercedesFactory::~MercedesFactory()
{
}

MercedesCar* MercedesFactory::get_car()
{
	return new MercedesCar;
}
