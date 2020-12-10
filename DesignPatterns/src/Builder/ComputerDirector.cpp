#include "ComputerDirector.h"


ComputerDirector::ComputerDirector()
{
}


ComputerDirector::~ComputerDirector()
{
}

Computer* ComputerDirector::construct(ComputerBuilder* builder)
{
	builder->build_brand();
	builder->build_cpu();
	builder->build_display_card();
	builder->build_hard_disk();
	builder->build_main_board();
	builder->build_memory();
	builder->build_power();
	return builder->CreateComputer();
}
