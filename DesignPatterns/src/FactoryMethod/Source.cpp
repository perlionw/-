#include "MercedesFactory.h"
#include "AudiFactory.h"
#include "HongqiFactory.h"
#include <iostream>
int main()
{

	AbstractFactory* audi_factory = new AudiFactory;

	AbstractFactory* mercedes_factory = new MercedesFactory;

	AbstractFactory* hongqi_factory = new HongqiFactory;

	audi_factory->get_car()->move();
	audi_factory->get_car()->stop();

	mercedes_factory->get_car()->move();
	mercedes_factory->get_car()->stop();

	hongqi_factory->get_car()->move();
	hongqi_factory->get_car()->stop();

	delete audi_factory;
	delete mercedes_factory;
	delete hongqi_factory;
	system("pause");
	return 0;
}