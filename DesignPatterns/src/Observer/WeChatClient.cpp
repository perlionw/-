#include "WeChatClient.h"
#include <string>

WeChatClient::WeChatClient(std::string user_name) :m_user_name(user_name)
{
}


WeChatClient::~WeChatClient()
{
}

int WeChatClient::recevie(std::string target, std::string article_name)
{
	std::cout << "�û�:" << m_user_name << "���յ�" << target << "΢�Ź��ںŵ�����, ���±���Ϊ: " << article_name << std::endl;
	return 0;
}
