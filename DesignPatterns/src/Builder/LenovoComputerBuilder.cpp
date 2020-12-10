#include "LenovoComputerBuilder.h"


LenovoComputerBuilder::LenovoComputerBuilder()
{
}


LenovoComputerBuilder::~LenovoComputerBuilder()
{
}

void LenovoComputerBuilder::build_brand()
{
	this->m_computer->set_brand("����");
}

void LenovoComputerBuilder::build_cpu()
{
	this->m_computer->set_cpu("����Cpu");
}

void LenovoComputerBuilder::build_main_board()
{
	this->m_computer->set_main_board("��������");
}

void LenovoComputerBuilder::build_hard_disk()
{
	this->m_computer->set_hard_disk("����Ӳ��");
}

void LenovoComputerBuilder::build_display_card()
{
	this->m_computer->set_display_card("������ʾ��");
}

void LenovoComputerBuilder::build_power()
{
	this->m_computer->set_power("�����Դ");
}

void LenovoComputerBuilder::build_memory()
{
	this->m_computer->set_memory("�����ڴ�");
}
