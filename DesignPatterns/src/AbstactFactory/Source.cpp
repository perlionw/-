#include <iostream>
#include "AudiFactory.h"

int main()
{
	AbstractFactory* audi_factory = new AudiFactory;

	audi_factory->get_car()->move();
	audi_factory->get_tire()->rotate();
	delete audi_factory;
	system("pause");
	return 0;
}