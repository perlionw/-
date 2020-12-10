#pragma once
#include <iostream>
class MysqlDataBase;
class OracleDataBase;
class RedisDataBase;

enum DATABASETYPE
{
	MYSQL,
	ORACLE,
	REDIS
};
class AbstractMediator
{
public:
	MysqlDataBase* m_mysql;
	OracleDataBase* m_oracle;
	RedisDataBase* m_redis;

public:
	AbstractMediator();
	~AbstractMediator();

	void set_mysql_data_base(MysqlDataBase* mysql);
	void set_oracle_data_base(OracleDataBase* oracle);
	void set_redis_data_base(RedisDataBase* redis);

	virtual void sync_data(DATABASETYPE type, std::string data) = 0;
};

