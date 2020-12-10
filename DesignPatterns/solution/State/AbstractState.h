#pragma once
class AbstractState
{
public:
	AbstractState();
	~AbstractState();

	virtual void UploadRobotInfo() = 0;

	virtual void UploadStationPatrolInfo() = 0;

private:
};

