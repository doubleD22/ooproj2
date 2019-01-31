#include "Circle.h"

Circle::Circle(const Point & center = Point(0, 0), const unsigned& radius=1, const Color c = Color::white) : Shape(center, c)
{
	m_radius = radius;
}

Point Circle::get_radius() const
{
	return m_radius;
}

void Circle::draw()
{
	cout << m_color << " Circle : Center in " << m_org << " Radius is " << m_radius << endl;
}

void Circle::scale(const int & factor)
{
	m_radius *= factor;
}

double Circle::area()
{
	return 3.14*pow(m_radius,2);
}



