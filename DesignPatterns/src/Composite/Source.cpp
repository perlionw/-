#include "Devices.h"
#include "Device.h"
int main()
{
	Devices* devices = new Devices("100100100", "��˲2Q98", "");

	Devices* device1 = new Devices("100100100100", "��˲2Q98��ĸբ��", "");

	Devices* device2 = new Devices("100100100101", "��˲2Q98��ĸբ��", "");

	Devices* device3 = new Devices("100100100102", "��˲2Q98����", "");

	Device* point1 = new Device("a001_11", "��˲2Q98��ĸբ��B��ĸ�߲��ͷ1", "12");
	Device* point2 = new Device("a001_12", "��˲2Q98��ĸբ��B��ĸ�߲��ͷ2", "12");
	Device* point3 = new Device("a001_13", "��˲2Q98��ĸբ��B��ĸ�߲��ͷ3", "12");
	Device* point4 = new Device("a001_14", "��˲2Q98��ĸբ��B��ĸ�߲��ͷ4", "12");
	Device* point5 = new Device("a001_15", "��˲2Q98��ĸբ��B��ĸ�߲��ͷ5", "12");
	Device* point6 = new Device("a001_16", "��˲2Q98��ĸբ��B��ĸ�߲��ͷ6", "12");
	Device* point7 = new Device("a001_17", "��˲2Q98��ĸբ��B��ĸ�߲��ͷ7", "12");

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