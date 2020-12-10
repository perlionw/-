#include "QQLoginAdapter.h"
#include "WeChatLoginAdapter.h"
#include <iostream>

int main()
{
	LoginTarget* qq_adapter = new QQLoginAdapter;
	qq_adapter->login();

	LoginTarget* wechat_adapter = new WeChatLoginAdapter;
	wechat_adapter->login();
	system("pause");
	return 0;
}