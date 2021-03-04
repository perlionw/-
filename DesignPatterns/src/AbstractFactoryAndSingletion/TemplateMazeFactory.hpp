#pragma once
#include "MazeFactory.h"
template <class PW, class PR, class PD>
class TemplateMazeFactory :
	public MazeFactory
{
public:
	TemplateMazeFactory();
	~TemplateMazeFactory();

	virtual std::shared_ptr<Maze> GetMaze();
	virtual std::shared_ptr<Wall> GetWall(const std::string& class_name);
	virtual std::shared_ptr<Room> GetRoom(const std::string& class_name, int n);
	virtual std::shared_ptr<Door> GetDoor(const std::string& class_name, std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);
};

template <class PW, class PR, class PD>
std::shared_ptr<Maze> TemplateMazeFactory<PW, PR, PD>::GetMaze()
{
	return MazeFactory::GetMaze();
}

template <class PW, class PR, class PD>
TemplateMazeFactory<PW, PR, PD>::~TemplateMazeFactory()
{

}

template <class PW, class PR, class PD>
TemplateMazeFactory<PW, PR, PD>::TemplateMazeFactory()
{

}

template <class PW, class PR, class PD>
std::shared_ptr<Door> TemplateMazeFactory<PW, PR, PD>::GetDoor(const std::string& class_name, std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{
	return std::shared_ptr<PD>(new PD(r1, r2));
}

template <class PW, class PR, class PD>
std::shared_ptr<Room> TemplateMazeFactory<PW, PR, PD>::GetRoom(const std::string& class_name, int n)
{
	return std::shared_ptr<PR>(new PR);
}

template <class PW, class PR, class PD>
std::shared_ptr<Wall> TemplateMazeFactory<PW, PR, PD>::GetWall(const std::string& class_name)
{
	return std::shared_ptr<PW>(new PW);
}

