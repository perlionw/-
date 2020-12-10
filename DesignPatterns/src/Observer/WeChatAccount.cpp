#include "WeChatAccount.h"
#include <string>

WeChatAccount::WeChatAccount(std::string name) : m_name(name)
{
}


WeChatAccount::~WeChatAccount()
{
}

void WeChatAccount::PublishArticles(std::string article_name, std::string content)
{
	std::cout << m_name << "微信公众号 发布了一篇推送，文章名称为: " << article_name << "，内容为" << content << std::endl;

	NotifyObserver(m_name, article_name);
}
