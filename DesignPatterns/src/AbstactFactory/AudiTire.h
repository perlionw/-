#pragma once
#include "AbstractTire.h"
class AudiTire :
	public AbstractTire
{
public:
	AudiTire();
	~AudiTire();

	virtual void rotate();
};

