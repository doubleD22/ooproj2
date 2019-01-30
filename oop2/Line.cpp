#include "Line.h"


Line::Line(const Point & p1 = Point(0, 0), const Point & p2 = Point(1, 1), const Color c = Color::white) : Shape(p1.get_x()>p2.get_x()?p2:p1, c)
{
	m_end = p1.get_x()>p2.get_x() ? p1 : p2;
}

void Line::move(const Point & p)
{
	Shape::move(p);
	m_end += p;
}

void Line::draw()
{
	cout<<m_color<< " Line from " << m_org << " To " << m_end << endl;
}

double Line::length() const
{
	return sqrt((double)((m_org.get_x() - m_end.get_x())*(m_org.get_x() - m_end.get_x()) + (m_org.get_y() - m_end.get_y())*(m_org.get_y() - m_end.get_y())));
}


void Line::scale(const int & factor)
{
	double length = this->length();
	double alpha = atan((m_end.get_y() - m_org.get_y()) / (m_end.get_x() - m_org.get_x()));
	int newx = m_end.get_x() + length*(factor - 1)*cos(alpha) - m_org.get_x();
	int newy = m_end.get_y() + length*(factor - 1)*sin(alpha) - m_org.get_y();
	Point temp(newx, newy);
	m_end = temp;
}

Point Line::get_end()
{
	return m_end;
}

							