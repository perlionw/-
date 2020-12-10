#include "DellComputerBuilder.h"


DellComputerBuilder::DellComputerBuilder()
{
}


DellComputerBuilder::~DellComputerBuilder()
{
}

void DellComputerBuilder::build_brand()
{
	m_computer->set_brand("����");
}

void DellComputerBuilder::build_cpu()
{
	m_computer->set_cpu("����CPU");
}

void DellComputerBuilder::build_main_board()
{
	m_computer->set_main_board("��������");
}

void DellComputerBuilder::build_hard_disk()
{
	m_computer->set_hard_disk("����Ӳ��");
}

void DellComputerBuilder::build_display_card()
{
	m_computer->set_display_card("������ʾ��");
}

void DellComputerBuilder::build_power()
{
	m_computer->set_power("������Դ");
}

void DellComputerBuilder::build_memory()
{
	m_computer->set_memory("�����ڴ�");
}
