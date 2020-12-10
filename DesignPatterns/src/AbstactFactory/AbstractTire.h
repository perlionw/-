#pragma once
class AbstractTire
{
public:
	AbstractTire();
	~AbstractTire();

	virtual void rotate() = 0;
};

