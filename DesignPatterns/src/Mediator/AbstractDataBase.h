#pragma once
#include <iostream>
#include "AbstractMediator.h"

class AbstractDataBase
{
public:
	AbstractDataBase(AbstractMediator* mediator);
	~AbstractDataBase();

	virtual void add(std::string data) = 0;
	virtual void add_data(std::string data) = 0;

protected:
	AbstractMediator* m_mediator;
};

