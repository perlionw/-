#pragma once
#include <iostream>
class Computer
{
public:
	Computer();
	~Computer();

	void set_brand(std::string brand);
	std::string get_brand();

	void set_cpu(std::string cpu);
	std::string get_cpu();

	void set_main_board(std::string main_board);
	std::string get_main_board();

	void set_hard_disk(std::string hard_disk);
	std::string get_hard_disk();

	void set_display_card(std::string display_card);
	std::string get_display_card();

	void set_power(std::string power);
	std::string get_power();

	void set_memory(std::string memory);
	std::string get_memory();

	void print();

private:
	std::string m_brand;
	std::string m_cpu;
	std::string m_man_board;
	std::string m_hard_disk;
	std::string m_display_card;
	std::string m_power;
	std::string m_memory;
};

