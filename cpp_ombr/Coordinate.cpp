#include "Coordinate.h"

Coordinate::Coordinate(int _x,int _y)
{
	m_iX = _x;
	m_iY = _y;
	cout << "Coordinate()\t" <<"("<<m_iX<<","<<m_iY<<")"<< endl;
}

Coordinate::~Coordinate()
{
	cout << "~Coordinate()\t" << "(" << m_iX << "," << m_iY << ")" << endl;
}

void Coordinate::setX(int _x)
{
	m_iX = _x;
}

int Coordinate::getX()
{
	return m_iX;
}

void Coordinate::setY(int _y)
{
	m_iY = _y;
}

int Coordinate::getY()
{
	return m_iY;
}
