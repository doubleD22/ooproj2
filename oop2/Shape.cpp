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

ostream & operator<<(ostream & os, const Color & c)
{

	switch (c)
	{
	case Color::white:		os << "White "; break;
	case Color::red:		os << "Red "; break;
	case Color::green:		os << "Green "; break;
	case Color::blue:		os << "Blue "; break;
	case Color::yellow:		os << "Yellow "; break;
	case Color::black:		os << "Black "; break;
	default:				os << "No color ";
	}
	return os;

}
