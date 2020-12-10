#pragma once
#include <iostream>
class Component
{
public:
	Component(std::string id, std::string name, std::string type);
public:
	virtual std::string GetParentId() = 0;
	virtual void print() = 0;
public:
	std::string m_id;
	std::string m_name;
	std::string m_type;
	std::string m_parent_id;
};

