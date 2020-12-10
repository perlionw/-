#include "ExecuteState.h"
#include <iostream>

ExecuteState::ExecuteState()
{
}


ExecuteState::~ExecuteState()
{
}

void ExecuteState::UploadRobotInfo()
{
	std::cout << "执行状态 上传机器人信息" << std::endl;
}

void ExecuteState::UploadStationPatrolInfo()
{
	std::cout << "执行状态 上传任务执行信息" << std::endl;
}
