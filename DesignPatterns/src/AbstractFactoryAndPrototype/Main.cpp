#include "MazeGame.h"
#include <iostream>
#include <algorithm>
#include <thread>
#include <string>
#include <vector>
//ԭ��ģʽ���ڵ�Ӧ�ó������ڣ��ܹ����Ƶ�ǰ����ʵ�ֶ������ݵĿ�¡��
//���磺���һ�������������Ҫ�����ϸߴ��۵����ݿ����������ԭ��ģʽ�ܹ��ϺõĻ��浱ǰ���󣬼������ݿ�ķ�������
int main()
{
	std::shared_ptr<MazeGame> game(new MazeGame(ROOM));
	game->CreateMaze();

	std::cout << "=================================" << std::endl;
	system("pause");
	return 0;
}