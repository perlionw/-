#include "LenovoComputerBuilder.h"


LenovoComputerBuilder::LenovoComputerBuilder()
{
}


LenovoComputerBuilder::~LenovoComputerBuilder()
{
}

void LenovoComputerBuilder::build_brand()
{
	this->m_computer->set_brand("联想");
}

void LenovoComputerBuilder::build_cpu()
{
	this->m_computer->set_cpu("联想Cpu");
}

void LenovoComputerBuilder::build_main_board()
{
	this->m_computer->set_main_board("联想主板");
}

void LenovoComputerBuilder::build_hard_disk()
{
	this->m_computer->set_hard_disk("联想硬盘");
}

void LenovoComputerBuilder::build_display_card()
{
	this->m_computer->set_display_card("联想显示屏");
}

void LenovoComputerBuilder::build_power()
{
	this->m_computer->set_power("联想电源");
}

void LenovoComputerBuilder::build_memory()
{
	this->m_computer->set_memory("联想内存");
}
