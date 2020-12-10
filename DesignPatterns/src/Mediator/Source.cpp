#include <iostream>
#include "SyncMediator.h"
#include "MysqlDataBase.h"
#include "OracleDataBase.h"
#include "RedisDataBase.h"
int main()
{
	AbstractMediator* mediator = new SyncMediator;
	MysqlDataBase* mysql_database = new MysqlDataBase(mediator);
	OracleDataBase* oracle_database = new OracleDataBase(mediator);
	RedisDataBase* redis_database = new RedisDataBase(mediator);
	mediator->set_mysql_data_base(mysql_database);
	mediator->set_oracle_data_base(oracle_database);
	mediator->set_redis_data_base(redis_database);
	mysql_database->add("23112");
	std::cout << mysql_database->count() << "   " << oracle_database->count() << "   " << redis_database->count() << std::endl;
	oracle_database->add("31241");
	std::cout << mysql_database->count() << "   " << oracle_database->count() << "   " << redis_database->count() << std::endl;
	redis_database->add("322");
	std::cout << mysql_database->count() << "   " << oracle_database->count() << "   " << redis_database->count() << std::endl;
	system("pause");
	return 0;
}