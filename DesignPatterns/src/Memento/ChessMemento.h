#pragma once
#include <iostream>
class ChessMemento
{
public:
	ChessMemento(std::string label, int x, int y);
	~ChessMemento();

	void set_label(std::string label);
	void setX(int x);
	void setY(int y);

	std::string get_label();
	int getX();
	int getY();

private:
	std::string m_label;
	int m_x;
	int m_y;
};

