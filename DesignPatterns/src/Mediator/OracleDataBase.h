#pragma once
#include "AbstractDataBase.h"
#include <vector>
class OracleDataBase :
	public AbstractDataBase
{
public:
	OracleDataBase(AbstractMediator* mediator);
	~OracleDataBase();
	virtual void add(std::string data);
	virtual void add_data(std::string data);

	int count();

private:
	std::vector<std::string> data_vec;
};

