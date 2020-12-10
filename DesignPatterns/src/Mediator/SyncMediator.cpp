#include "SyncMediator.h"
#include "MysqlDataBase.h"
#include "OracleDataBase.h"
#include "RedisDataBase.h"

SyncMediator::SyncMediator()
{
}


SyncMediator::~SyncMediator()
{
}

void SyncMediator::sync_data(DATABASETYPE type, std::string data)
{
	switch (type)
	{
		case MYSQL:
		{
			{
				this->m_oracle->add_data(data);
				this->m_redis->add_data(data);
			}
		}
			break;
		case ORACLE:
		{
			{
				this->m_mysql->add_data(data);
			}
		}
			break;
		case REDIS:
		{
			{

			}
		}
			break;
		default:
			break;
	}
}
