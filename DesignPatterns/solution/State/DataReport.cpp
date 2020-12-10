#include "DataReport.h"


DataReport::DataReport()
{
}


DataReport::~DataReport()
{
}

void DataReport::SetState(AbstractState* state)
{
	m_state = state;
}

void DataReport::UploadRobotInfo()
{
	m_state->UploadRobotInfo();
}

void DataReport::UploadStationPatrolInfo()
{
	m_state->UploadStationPatrolInfo();
}
