#include "AbstractDecorator.h"


AbstractDecorator::AbstractDecorator(AbstractBatterCake* batter_cake)
{
	m_batter_cake = batter_cake;
}


AbstractDecorator::~AbstractDecorator()
{
}

std::string AbstractDecorator::get_cake_desc()
{
	return m_batter_cake->get_cake_desc();
}

int AbstractDecorator::get_price()
{
	return m_batter_cake->get_price();
}
