#include "ComputerBuilder.h"


ComputerBuilder::ComputerBuilder()
{
	m_computer = new Computer;
}


ComputerBuilder::~ComputerBuilder()
{
	delete m_computer;
}

Computer* ComputerBuilder::CreateComputer()
{
	return m_computer;
}
