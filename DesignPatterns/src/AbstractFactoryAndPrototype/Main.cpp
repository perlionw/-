#include "MazeGame.h"
#include <iostream>
#include <algorithm>
#include <thread>
#include <string>
#include <vector>
//原型模式存在的应用场景在于，能够复制当前对象，实现对象数据的克隆。
//比如：如果一个对象的数据需要经过较高代价的数据库操作，采用原型模式能够较好的缓存当前对象，减少数据库的访问量。
int main()
{
	std::shared_ptr<MazeGame> game(new MazeGame(ROOM));
	game->CreateMaze();

	std::cout << "=================================" << std::endl;
	system("pause");
	return 0;
}