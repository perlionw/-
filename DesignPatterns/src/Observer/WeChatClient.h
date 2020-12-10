#pragma once
#include "Observer.h"
class WeChatClient :
	public Observer
{
public:
	WeChatClient(std::string user_name);
	~WeChatClient();

	virtual int recevie(std::string target, std::string article_name);

private:
	std::string m_user_name;
};

