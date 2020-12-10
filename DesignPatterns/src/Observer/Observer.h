#pragma once
#include <iostream>
class Observer
{
public:
	Observer();
	~Observer();

	virtual int recevie(std::string target, std::string article_name) = 0;
};

