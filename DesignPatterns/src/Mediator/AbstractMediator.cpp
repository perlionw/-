#include "AbstractMediator.h"


AbstractMediator::AbstractMediator()
{
}


AbstractMediator::~AbstractMediator()
{
}

void AbstractMediator::set_mysql_data_base(MysqlDataBase* mysql)
{
	m_mysql = mysql;
}

void AbstractMediator::set_oracle_data_base(OracleDataBase* oracle)
{
	m_oracle = oracle;
}

void AbstractMediator::set_redis_data_base(RedisDataBase* redis)
{
	m_redis = redis;
}
