#pragma once
#include "LoginTarget.h"
#include "CheckDataAdaptee.h"
class WeChatLoginAdapter :
	public LoginTarget, private CheckDataAdaptee
{
public:
	WeChatLoginAdapter();
	~WeChatLoginAdapter();

	virtual void login();
};

