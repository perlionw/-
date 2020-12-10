#include "CocreteBatterCake.h"
#include "EggDecorator.h"
#include "SausageDecorator.h"
#include <iostream>
#include <string>
int main()
{
	AbstractBatterCake* batter_cake = new CocreteBatterCake;
	AbstractBatterCake* egg_decorator1 = new EggDecorator(batter_cake);
	std::cout << egg_decorator1->get_cake_desc() << std::ends << egg_decorator1->get_price() << std::endl;
	AbstractBatterCake* egg_decorator2 = new EggDecorator(egg_decorator1);
	std::cout << egg_decorator2->get_cake_desc() << std::ends << egg_decorator2->get_price() << std::endl;
	AbstractBatterCake* sausage_decorator= new SausageDecorator(egg_decorator2);
	std::cout << sausage_decorator->get_cake_desc() << std::ends << sausage_decorator->get_price() << std::endl;

	delete batter_cake;
	delete egg_decorator1;
	delete egg_decorator2;
	delete sausage_decorator;
	system("pause");
	return 0;
}