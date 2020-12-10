#pragma once
#include "AbstractDecorator.h"
class EggDecorator :
	public AbstractDecorator
{
public:
	EggDecorator(AbstractBatterCake* batter_cake);
	~EggDecorator();

	std::string get_cake_desc();
	int get_price();
};

