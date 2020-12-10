#include "MysqlDataBase.h"


MysqlDataBase::MysqlDataBase(AbstractMediator* mediator) : AbstractDataBase(mediator)
{
}


MysqlDataBase::~MysqlDataBase()
{
}

void MysqlDataBase::add(std::string data)
{
	add_data(data);
	this->m_mediator->sync_data(MYSQL, data);
}

void MysqlDataBase::add_data(std::string data)
{
	std::cout << "MYSQL 添加了一条数据" << std::endl;
	this->data_vec.push_back(data);
}

int MysqlDataBase::count()
{
	return this->data_vec.size();
}
