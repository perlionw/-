#include "WeChatLoginAdapter.h"
#include <iostream>

WeChatLoginAdapter::WeChatLoginAdapter()
{
}


WeChatLoginAdapter::~WeChatLoginAdapter()
{
}

void WeChatLoginAdapter::login()
{
	check_data();

	std::cout << "微信登入成功" << std::endl;
}
