#pragma once
#include "Point.h"
#include <math.h>  

enum class Color { white = 0, red, green, blue, yellow, black, END_OF_COLORS};

ostream& operator<<(ostream& os, const Color& c);




class Shape
{
protected:
	Point m_org;    //the coordination point for the begging of the shape
	Color m_color; //the color of the shape

public:
	Shape(const Point& org, const Color color);   //constructor
	virtual ~Shape() = 0 {};				     //pure virtual distractor -- the childrens need to  
												//coplete this in their class
	virtual void draw() const = 0;					   //writing the text that describes the shape
	virtual void scale(const int& factor)=0;
	virtual string who_am_i() = 0;	 //the name says it all 
	virtual double area() = 0;			//return the area of the shape
	virtual void move(const Point& P);		   //moving m_org (and therefore moving the shape) by
									  //another point coordinates
	virtual Point get_org();

};
	