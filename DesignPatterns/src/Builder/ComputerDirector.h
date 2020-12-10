#pragma once
#include "ComputerBuilder.h"
class ComputerDirector
{
public:
	ComputerDirector();
	~ComputerDirector();

	Computer* construct(ComputerBuilder* builder);

};

