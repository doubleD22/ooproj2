#include "Shape.h"

Shape::Shape(const Point & org, const Color color)
{
	m_org = org;
	m_color = color;
}


void Shape::move(const Point & P)
{
	m_org += P;
}

Point Shape::get_org()
{
	return m_org;
}


Color Shape::get_color() const		// translate an enum to a string
{
	switch (m_color)
	{
	case white:		cout << "White "; break;
	case red:		cout << "Red "; break;
	case green:		cout << "Green "; break;
	case blue:		cout << "Blue "; break;
	case yellow:	cout << "Yellow "; break;
	case black:		cout << "Black "; break;
	default:		cout << "No color ";
	}
	return m_color;
}