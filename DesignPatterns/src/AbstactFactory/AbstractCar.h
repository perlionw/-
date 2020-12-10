#pragma once
class AbstractCar
{
public:
	AbstractCar();
	~AbstractCar();

	virtual void move() = 0;

	virtual void stop() = 0;
};

