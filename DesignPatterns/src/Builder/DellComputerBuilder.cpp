#include "DellComputerBuilder.h"


DellComputerBuilder::DellComputerBuilder()
{
}


DellComputerBuilder::~DellComputerBuilder()
{
}

void DellComputerBuilder::build_brand()
{
	m_computer->set_brand("戴尔");
}

void DellComputerBuilder::build_cpu()
{
	m_computer->set_cpu("戴尔CPU");
}

void DellComputerBuilder::build_main_board()
{
	m_computer->set_main_board("戴尔主板");
}

void DellComputerBuilder::build_hard_disk()
{
	m_computer->set_hard_disk("戴尔硬盘");
}

void DellComputerBuilder::build_display_card()
{
	m_computer->set_display_card("戴尔显示屏");
}

void DellComputerBuilder::build_power()
{
	m_computer->set_power("戴尔电源");
}

void DellComputerBuilder::build_memory()
{
	m_computer->set_memory("戴尔内存");
}
