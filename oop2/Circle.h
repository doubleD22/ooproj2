#pragma once
#include "Shape.h"


class Circle : public Shape
{
protected:
	unsigned m_radius;  //to make a circle all we need is a point (that we already have) and a radius
public:
	Circle(const Point& center, const unsigned& radius, const Color c); //constructor
	Point get_radius() const; 
	void draw();		//return the center, the radius and the color of the circle 
	void scale(const int& factor);   
	double area();
};