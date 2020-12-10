#pragma once
#include "AbstractState.h"
class DataReport
{
public:
	DataReport();
	~DataReport();

	void SetState(AbstractState* state);

	void UploadRobotInfo();

	void UploadStationPatrolInfo();

private:
	AbstractState* m_state;
};

