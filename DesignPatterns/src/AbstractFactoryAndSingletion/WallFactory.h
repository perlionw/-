#pragma once
#include <memory>
#include "MazeFactory.h"
#include "BasicDefine.h"
class Wall;

class WallFactory : public MazeFactory
{

public:

	WallFactory();
	~WallFactory();

	std::shared_ptr<Wall> GetWall(WallType type);

};

