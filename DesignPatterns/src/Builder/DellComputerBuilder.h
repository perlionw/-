#pragma once
#include "ComputerBuilder.h"
class DellComputerBuilder :
	public ComputerBuilder
{
public:
	DellComputerBuilder();
	~DellComputerBuilder();

	virtual void build_brand();
	virtual void build_cpu();
	virtual void build_main_board();
	virtual void build_hard_disk();
	virtual void build_display_card();
	virtual void build_power();
	virtual void build_memory();
};

