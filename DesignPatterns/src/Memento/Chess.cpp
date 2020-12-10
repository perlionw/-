#include "Chess.h"
#include <string>

Chess::Chess(std::string label, int x, int y) :m_label(label), m_x(x), m_y(y)
{
}


Chess::~Chess()
{
}

void Chess::set_label(std::string label)
{
	m_label = label;
}

void Chess::setX(int x)
{
	m_x = x;
}

void Chess::setY(int y)
{
	m_y = y;
}

ChessMemento* Chess::save()
{
	return new ChessMemento(m_label, m_x, m_y);
}

void Chess::restore(ChessMemento* memento)
{
	m_label = memento->get_label();
	m_x = memento->getX();
	m_y = memento->getY();
}

void Chess::show()
{
	std::cout << "棋子:" << this->m_label << ", 当前位置为：<" << this->m_x << "," << this->m_y << ">" << std::endl;
}
