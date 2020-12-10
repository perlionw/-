#pragma once
#include "AbstractState.h"
class ExecuteState :
	public AbstractState
{
public:
	ExecuteState();
	~ExecuteState();


	virtual void UploadRobotInfo();

	virtual void UploadStationPatrolInfo();
};

