#pragma once
#include "Target.h"
class WeChatAccount :
	public Target
{
public:
	WeChatAccount(std::string name);
	~WeChatAccount();

	void PublishArticles(std::string article_name, std::string content);

private:
	std::string m_name;
};

