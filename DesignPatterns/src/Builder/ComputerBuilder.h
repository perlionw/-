#pragma once
#include "Computer.h"
class ComputerBuilder
{
public:
	ComputerBuilder();
	~ComputerBuilder();

	virtual void build_brand() = 0;
	virtual void build_cpu() = 0;
	virtual void build_main_board() = 0;
	virtual void build_hard_disk() = 0;
	virtual void build_display_card() = 0;
	virtual void build_power() = 0;
	virtual void build_memory() = 0;

	Computer* CreateComputer();

	Computer* m_computer;
};

