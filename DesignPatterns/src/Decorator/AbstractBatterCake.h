#pragma once
#include <iostream>
class AbstractBatterCake
{
public:
	AbstractBatterCake();
	~AbstractBatterCake();

	virtual std::string get_cake_desc() = 0;

	virtual int get_price() = 0;

private:

};

