#include "OracleDataBase.h"


OracleDataBase::OracleDataBase(AbstractMediator* mediator) : AbstractDataBase(mediator)
{
}


OracleDataBase::~OracleDataBase()
{
}

void OracleDataBase::add(std::string data)
{
	add_data(data);
	this->m_mediator->sync_data(ORACLE, data);
}

void OracleDataBase::add_data(std::string data)
{
	std::cout << "Oracle增加数据" << std::endl;
	this->data_vec.push_back(data);
}

int OracleDataBase::count()
{
	return this->data_vec.size();
}
