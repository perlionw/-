#pragma once
#include "AbstractBatterCake.h"
class AbstractDecorator :
	public AbstractBatterCake
{
public:
	AbstractDecorator(AbstractBatterCake* batter_cake);
	~AbstractDecorator();


protected:
	virtual std::string get_cake_desc();
	virtual int get_price();


private:
	AbstractBatterCake* m_batter_cake;
};

