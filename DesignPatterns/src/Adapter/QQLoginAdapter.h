#pragma once
#include "LoginTarget.h"
#include "CheckDataAdaptee.h"
class QQLoginAdapter :
	public LoginTarget, private CheckDataAdaptee
{
public:
	QQLoginAdapter();
	~QQLoginAdapter();

	virtual void login();
};

