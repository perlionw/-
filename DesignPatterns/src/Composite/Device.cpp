#include "Device.h"
#include <iostream>
#include <string>
Device::Device(std::string id, std::string name, std::string type) : Component(id, name, type)
{
}


Device::~Device()
{
}

std::string Device::GetParentId()
{
	return this->m_parent_id;
}

void Device::print()
{
	std::cout << m_name << "parent_id£º " << GetParentId() << std::endl;
}
