#include "EggDecorator.h"


EggDecorator::EggDecorator(AbstractBatterCake* batter_cake) :AbstractDecorator(batter_cake)
{
}


EggDecorator::~EggDecorator()
{
}

std::string EggDecorator::get_cake_desc()
{
	return AbstractDecorator::get_cake_desc() + " ¼ÓÒ»¸ö¼¦µ°";
}

int EggDecorator::get_price()
{
	return AbstractDecorator::get_price() + 1;
}
