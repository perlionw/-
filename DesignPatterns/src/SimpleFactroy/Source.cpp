#include "CarFactory.h"
#include <stdlib.h>
int main()
{
	CarFactory* audo_car = new CarFactory(AUDI);

	CarFactory* mercedes_car = new CarFactory(MERCEDES);

	CarFactory* hongqi_car = new CarFactory(HONGQI);

	hongqi_car->move();
	audo_car->move();
	mercedes_car->move();

	delete audo_car;
	delete mercedes_car;
	delete hongqi_car;
	system("pause");
	return 0;
}