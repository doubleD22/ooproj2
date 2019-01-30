#include "Rectangle.h"

Rectangle::Rectangle(const Point & p1 = Point(0, 0), const Point & p2 = Point(1, 1), const Color c = Color::white) : Shape((p2.get_x()>p1.get_x() && p2.get_y()>p1.get_y()) ? p1 : p2, c)
{
	m_upright = (p2.get_x()>p1.get_x() && p2.get_y()>p1.get_y()) ? p2 : p1;
}

void Rectangle::move(const Point & p)
{
	Shape::move(p);
	m_upright += p;
}

void Rectangle::draw() //every rectangle consists of 4 sides (lines)
{
	Line down(m_org, Point(m_upright.get_x(),m_org.get_y()), m_color); 
	Line up(Point(m_org.get_x(), m_upright.get_y()) , m_upright, m_color);
	Line left(m_org, Point(m_org.get_x(), m_upright.get_y()), m_color);
	Line right(Point(m_org.get_x(), m_upright.get_y()), m_upright, m_color);
	cout << m_color << " rectangle"<< endl;
	cout << "		";
	down.draw();
	cout << "		";
	left.draw();
	cout << "		";
	up.draw();
	cout << "		";
	right.draw();
}

void Rectangle::scale(const int & factor)
{
	Line diagonal_line(m_org, m_upright, m_color);
	diagonal_line.scale(factor);
	m_upright = diagonal_line.get_end();
}

double Rectangle::area()
{
	return (m_upright.get_y() - m_org.get_y())*(m_upright.get_x() - m_org.get_x());
}
