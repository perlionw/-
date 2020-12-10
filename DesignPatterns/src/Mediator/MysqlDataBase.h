#pragma once
#include "AbstractDataBase.h"
#include <vector>
class MysqlDataBase :
	public AbstractDataBase
{
public:
	MysqlDataBase(AbstractMediator* mediator);
	~MysqlDataBase();

	virtual void add(std::string data);
	virtual void add_data(std::string data);

	int count();
private:
	std::vector<std::string> data_vec;
};

