#pragma once
#include "Shape.h"

class Canvas : public Shape
{
private:
	Shape ** m_shapes; //creating 
	int m_maxsize;	//maximum number of shapes in this canvas
	int m_length;	//length of the polymorphic array.
	Canvas(const Canvas& c);
public:
	Canvas(const Point& p , Color c, const int& length); //constructor
	~Canvas();
	void draw();
	void scale(const int& factor);
	double area();
	bool insert_shape(Shape* shape);
	//Canvas& operator=(const Canvas& c);
	static int m_counter;
};

