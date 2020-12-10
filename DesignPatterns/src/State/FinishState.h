#pragma once
#include "AbstractState.h"
class FinishState :
	public AbstractState
{
public:
	FinishState();
	~FinishState();


	virtual void UploadRobotInfo();

	virtual void UploadStationPatrolInfo();
};

