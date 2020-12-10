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
	std::cout << "用户:" << m_user_name << "接收到" << target << "微信公众号的推送, 文章标题为: " << article_name << std::endl;
	return 0;
}
