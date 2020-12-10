#pragma once
#include "Observer.h"
#include <list>
class Target
{
public:
	Target();
	~Target();

	void AddObserver(Observer* observer);
	void RemoveObserver(Observer* observer);
protected:
	void NotifyObserver(std::string target_name, std::string article_name);

private:
	std::list<Observer*> observers;
};


