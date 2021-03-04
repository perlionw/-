#include "MazeGame.h"
#include <iostream>
#include <algorithm>
#include <thread>
#include <string>
#include <vector>


int main()
{
	std::shared_ptr<MazeGame> game(new MazeGame(ROOM));
	game->CreateMaze();

	std::cout << "=================================" << std::endl;
	system("pause");
	return 0;
}