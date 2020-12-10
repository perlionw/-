#include "Target.h"


Target::Target()
{
}


Target::~Target()
{
}

void Target::AddObserver(Observer* observer)
{
	this->observers.push_back(observer);
}

void Target::RemoveObserver(Observer* observer)
{
	this->observers.remove(observer);
}

void Target::NotifyObserver(std::string target_name, std::string article_name)
{
	for (auto it : observers)
	{
		it->recevie(target_name, article_name);
	}
}
