#pragma once
#include "Component.h"
#include <vector>
#include <list>
class Devices :
	public Component
{
public:
	Devices(std::string id, std::string name, std::string type);
	~Devices();

	void AddDevice(Component* component);

	void RemoveDevice(Component* component);

	virtual std::string GetParentId();

	void print();
private:
	std::list<Component*> devices_list;
};

