#pragma once
#include "AbstractDecorator.h"
class SausageDecorator :
	public AbstractDecorator
{
public:
	SausageDecorator(AbstractBatterCake* batter_cake);
	~SausageDecorator();

	virtual std::string get_cake_desc();
	virtual int get_price();
};

