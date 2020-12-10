#pragma once
#include "Component.h"
class Device :
	public Component
{
public:
	Device(std::string id, std::string name, std::string type);
	~Device();

	virtual std::string GetParentId();

	void print();
};

