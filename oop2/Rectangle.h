#pragma once
#include "Shape.h"
#include "Line.h"

class Rectangle : public Shape
{
protected:
	Point m_upright; //the second point beause for drawing a Rectangle we need at least 2 points 

public:
	Rectangle(const Point & downleft, const Point & upright, const Color c);// constructor
	void move(const Point& p); //move the origin point by p
	void draw();  // printing the lines in the Rectangle and its color
	void scale(const int& factor); //multiply the Rectangle by a given number
	double area(); // returning the area 
	//string who_am_i();
}; 