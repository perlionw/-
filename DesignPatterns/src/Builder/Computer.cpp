#include "Computer.h"
#include <iostream>
#include <string>
Computer::Computer()
{
}


Computer::~Computer()
{
}

void Computer::set_brand(std::string brand)
{
	m_brand = brand;
}

std::string Computer::get_brand()
{
	return m_brand;
}

void Computer::set_cpu(std::string cpu)
{
	m_cpu = cpu;
}

std::string Computer::get_cpu()
{
	return m_cpu;
}

void Computer::set_main_board(std::string main_board)
{
	m_man_board = main_board;
}

std::string Computer::get_main_board()
{
	return m_man_board;
}

void Computer::set_hard_disk(std::string hard_disk)
{
	m_hard_disk = hard_disk;
}

std::string Computer::get_hard_disk()
{
	return m_hard_disk;
}

void Computer::set_display_card(std::string display_card)
{
	m_display_card = display_card;
}

std::string Computer::get_display_card()
{
	return m_display_card;
}

void Computer::set_power(std::string power)
{
	m_power = power;
}

std::string Computer::get_power()
{
	return m_power;
}

void Computer::set_memory(std::string memory)
{
	m_memory = memory;
}

std::string Computer::get_memory()
{
	return m_memory;
}

void Computer::print()
{
	std::cout << this->get_brand() << std::ends << this->get_cpu() << std::ends << this->get_display_card() << std::ends
		<< this->get_hard_disk() << std::ends << this->get_main_board() << std::ends << this->get_memory() << std::ends
		<< this->get_power() << std::endl;
}
