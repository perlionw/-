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
	std::cout << m_name << "΢�Ź��ں� ������һƪ���ͣ���������Ϊ: " << article_name << "������Ϊ" << content << std::endl;

	NotifyObserver(m_name, article_name);
}
