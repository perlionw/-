#include "DellComputerBuilder.h"
#include "LenovoComputerBuilder.h"
#include "ComputerDirector.h"
#include <iostream>
int main()
{
	ComputerBuilder* dell_builder = new DellComputerBuilder;
	ComputerBuilder* lenovo_builder = new LenovoComputerBuilder;
	ComputerDirector director;
	Computer* dell_computer = director.construct(dell_builder);
	dell_computer->print();

	Computer* lenovo_computer = director.construct(lenovo_builder);
	lenovo_computer->print();

	delete dell_builder;
	delete lenovo_builder;
	system("pause");
	return 0;
}