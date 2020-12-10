#include "MementoCareTaker.h"


MementoCareTaker::MementoCareTaker() : index(0)
{
}


MementoCareTaker::~MementoCareTaker()
{
}

void MementoCareTaker::add_memento(ChessMemento* memento)
{
	memento_vec.push_back(memento);	
}

ChessMemento* MementoCareTaker::get_memento(int i)
{
	return memento_vec[i];
}
