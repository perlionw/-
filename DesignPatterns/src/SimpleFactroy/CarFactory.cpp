#include "CarFactory.h"
#include "AudiCar.h"
#include "MercedesCar.h"
#include "HongqiCar.h"
CarFactory::CarFactory(CARTYPE type)
{
	switch (type)
	{
		case AUDI:
			m_car = new AudiCar;
			break;
		case MERCEDES:
			m_car = new MercedesCar;
			break;
		case HONGQI:
			m_car = new HongqiCar;
			break;
		default:
			break;
	}
}

CarFactory::~CarFactory()
{
}

void CarFactory::move()
{
	m_car->move();
}
