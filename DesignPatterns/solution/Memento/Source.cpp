#include <iostream>
#include "Chess.h"
#include "MementoCareTaker.h"
MementoCareTaker care_taker;
class Client
{
public:
	void play(Chess* chess);

	void undo(Chess* chess);

	void redo(Chess* chess);
protected:
private:
	int index = 0;
};

void Client::play(Chess* chess)
{
	care_taker.add_memento(chess->save());
	index++;
}

void Client::undo(Chess* chess)
{
	ChessMemento* memento = care_taker.get_memento(index - 1);
	index--;
	chess->restore(memento);
}

void Client::redo(Chess* chess)
{
	ChessMemento* memento = care_taker.get_memento(index);

	chess->restore(memento);
}

int main()
{
	Chess* chess = new Chess("Âí", 1, 5);
	Client client;
	client.play(chess);
	chess->show();
	chess->setX(5);
	chess->show();
	client.play(chess);
	chess->setY(4);
	chess->show();
	client.undo(chess);
	chess->show();
	client.redo(chess);
	chess->show();



	system("pause");
	return 0;
}