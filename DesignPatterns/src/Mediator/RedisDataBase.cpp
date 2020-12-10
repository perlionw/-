#include "RedisDataBase.h"


RedisDataBase::RedisDataBase(AbstractMediator* mediator) : AbstractDataBase(mediator)
{
}


RedisDataBase::~RedisDataBase()
{
}

void RedisDataBase::add(std::string data)
{
	add_data(data);
	this->m_mediator->sync_data(REDIS, data);
}

void RedisDataBase::add_data(std::string data)
{
	std::cout << "Redis新增一条数据" << std::endl;
	this->data_vec.push_back(data);
}

int RedisDataBase::count()
{
	return this->data_vec.size();
}
