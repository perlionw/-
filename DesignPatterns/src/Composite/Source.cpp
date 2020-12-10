#include "Devices.h"
#include "Device.h"
int main()
{
	Devices* devices = new Devices("100100100", "商瞬2Q98", "");

	Devices* device1 = new Devices("100100100100", "商瞬2Q98正母闸刀", "");

	Devices* device2 = new Devices("100100100101", "商瞬2Q98副母闸刀", "");

	Devices* device3 = new Devices("100100100102", "商瞬2Q98开关", "");

	Device* point1 = new Device("a001_11", "商瞬2Q98正母闸刀B相母线侧接头1", "12");
	Device* point2 = new Device("a001_12", "商瞬2Q98正母闸刀B相母线侧接头2", "12");
	Device* point3 = new Device("a001_13", "商瞬2Q98正母闸刀B相母线侧接头3", "12");
	Device* point4 = new Device("a001_14", "商瞬2Q98正母闸刀B相母线侧接头4", "12");
	Device* point5 = new Device("a001_15", "商瞬2Q98正母闸刀B相母线侧接头5", "12");
	Device* point6 = new Device("a001_16", "商瞬2Q98正母闸刀B相母线侧接头6", "12");
	Device* point7 = new Device("a001_17", "商瞬2Q98正母闸刀B相母线侧接头7", "12");

	devices->AddDevice(device1);
	devices->AddDevice(device2);
	devices->AddDevice(device3);

	device1->AddDevice(point1);
	device1->AddDevice(point2);
	device1->AddDevice(point3);

	device2->AddDevice(point4);
	device2->AddDevice(point5);

	device3->AddDevice(point6);
	device3->AddDevice(point7);

	devices->print();
	system("pause");
	return 0;
}