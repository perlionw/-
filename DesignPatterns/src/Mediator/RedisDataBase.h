#pragma once
#include "AbstractDataBase.h"
#include <vector>
class RedisDataBase :
	public AbstractDataBase
{
public:
	RedisDataBase(AbstractMediator* mediator);
	~RedisDataBase();
	virtual void add(std::string data);
	virtual void add_data(std::string data);

	int count();
private:

	std::vector<std::string> data_vec;
};

