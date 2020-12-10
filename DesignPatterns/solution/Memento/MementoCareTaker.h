#pragma once
#include <vector>
#include "ChessMemento.h"
class MementoCareTaker
{
public:
	MementoCareTaker();
	~MementoCareTaker();

	void add_memento(ChessMemento* memento);

	ChessMemento* get_memento(int i);

private:
	std::vector<ChessMemento*> memento_vec;

	int index;
};

