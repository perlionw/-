#include "WeChatAccount.h"
#include "WeChatClient.h"

int main()
{

	WeChatClient* client1 = new WeChatClient("张三");
	WeChatClient* client2 = new WeChatClient("李四");
	WeChatClient* client3 = new WeChatClient("王五");

	WeChatAccount* acount1 = new WeChatAccount("文娱");
	WeChatAccount* acount2 = new WeChatAccount("篮球");

	acount1->AddObserver(client1);
	acount1->AddObserver(client2);
	acount1->AddObserver(client3);

	acount2->AddObserver(client1);
	acount2->AddObserver(client2);

	acount2->PublishArticles("crossover study", "nice");
	acount1->PublishArticles("游乐场", "跳楼机");

	acount1->RemoveObserver(client1);
	acount1->PublishArticles("沙滩", "海");

	system("pause");
	return 0;
}