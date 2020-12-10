#include "WeChatAccount.h"
#include "WeChatClient.h"

int main()
{

	WeChatClient* client1 = new WeChatClient("����");
	WeChatClient* client2 = new WeChatClient("����");
	WeChatClient* client3 = new WeChatClient("����");

	WeChatAccount* acount1 = new WeChatAccount("����");
	WeChatAccount* acount2 = new WeChatAccount("����");

	acount1->AddObserver(client1);
	acount1->AddObserver(client2);
	acount1->AddObserver(client3);

	acount2->AddObserver(client1);
	acount2->AddObserver(client2);

	acount2->PublishArticles("crossover study", "nice");
	acount1->PublishArticles("���ֳ�", "��¥��");

	acount1->RemoveObserver(client1);
	acount1->PublishArticles("ɳ̲", "��");

	system("pause");
	return 0;
}