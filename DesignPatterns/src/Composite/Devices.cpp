#include "Devices.h"
#include <string>

Devices::Devices(std::string id, std::string name, std::string type) : Component(id, name, type)
{

}

Devices::~Devices()
{
}

void Devices::AddDevice(Component* component)
{
	component->m_parent_id = this->m_id;
	devices_list.push_back(component);
}

void Devices::RemoveDevice(Component* component)
{
	devices_list.remove(component);
}

std::string Devices::GetParentId()
{
	return this->m_parent_id;
}

void Devices::print()
{
	std::cout << m_name << "parent_id£º " << GetParentId() << std::endl;
	for (auto it : devices_list)
	{
		it->print();
	}
}
