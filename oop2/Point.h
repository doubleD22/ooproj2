#pragma once
#include <iostream>
#include <string>
using namespace std;

class Point {
private:
	int m_xc, m_yc;	//(x,y) coordinats

public:
	Point(int x = 0, int y = 0) : m_xc(x), m_yc(y) {}
	int get_x(void) const { return m_xc; }
	int get_y(void) const { return m_yc; }

	Point operator+(const Point& p) const
	{
		return Point(m_xc + p.m_xc, m_yc + p.m_yc);
	}
	Point& operator+=(const Point& p) //add
	{
		m_xc += p.m_xc;
		m_yc += p.m_yc;
		return *this;
	}
	Point& operator=(const Point& p) //equal
	{
		m_xc = p.get_x();
		m_yc = p.get_y();
		return *this;
	}
	friend ostream& operator<<(ostream& os, const Point& p) //for printing
	{
		os << '(' << p.get_x() << ',' << p.get_y() << ')';
		return os;
	}
};