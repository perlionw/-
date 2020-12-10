#include "ChessMemento.h"


ChessMemento::ChessMemento(std::string label, int x, int y) : m_label(label), m_x(x), m_y(y)
{
}


ChessMemento::~ChessMemento()
{
}

void ChessMemento::set_label(std::string label)
{
	m_label = label;
}

void ChessMemento::setX(int x)
{
	m_x = x;
}

void ChessMemento::setY(int y)
{
	m_y = y;
}

std::string ChessMemento::get_label()
{
	return m_label;
}

int ChessMemento::getX()
{
	return m_x;
}

int ChessMemento::getY()
{
	return m_y;
}
