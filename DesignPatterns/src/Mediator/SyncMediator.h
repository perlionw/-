#pragma once
#include "AbstractMediator.h"
class SyncMediator :
	public AbstractMediator
{
public:
	SyncMediator();
	~SyncMediator();

	virtual void sync_data(DATABASETYPE type, std::string data);
};

