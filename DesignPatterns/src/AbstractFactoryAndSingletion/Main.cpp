#include "MazeGame.h"
#include <iostream>
#include <algorithm>
#include <thread>
#include <string>

int main()
{
	std::shared_ptr<MazeGame> game(new MazeGame(ROOM));
	game->CreateMaze();

	std::cout << "=================================" << std::endl;

	game.reset(new MazeGame(DOOR));
	game->CreateMaze();
	system("pause");
	return 0;
}