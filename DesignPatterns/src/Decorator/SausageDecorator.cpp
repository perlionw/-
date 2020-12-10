#include "SausageDecorator.h"


SausageDecorator::SausageDecorator(AbstractBatterCake* batter_cake) :AbstractDecorator(batter_cake)
{
}


SausageDecorator::~SausageDecorator()
{
}

std::string SausageDecorator::get_cake_desc()
{
	return AbstractDecorator::get_cake_desc() + " º”“ª∏˘œ„≥¶";
}

int SausageDecorator::get_price()
{
	return AbstractDecorator::get_price() + 1;
}
