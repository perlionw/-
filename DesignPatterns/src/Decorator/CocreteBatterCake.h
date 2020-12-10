#pragma once
#include "AbstractBatterCake.h"
class CocreteBatterCake :
	public AbstractBatterCake
{
public:
	CocreteBatterCake();
	~CocreteBatterCake();

	virtual std::string get_cake_desc();

	virtual int get_price();
};

