#pragma once
#include <iostream>
#include "ChessMemento.h"
class Chess
{
public:
	Chess(std::string label, int x, int y);
	~Chess();

	void set_label(std::string label);
	void setX(int x);
	void setY(int y);


	ChessMemento* save();

	void restore(ChessMemento* memento);

	void show();
private:
	std::string m_label;
	int m_x;
	int m_y;
};

