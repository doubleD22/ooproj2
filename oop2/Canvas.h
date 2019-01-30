#pragma once
#include "Shape.h"

class Canvas : public Shape
{
private:
	Shape ** m_shapes; //creating 
	int m_length;
	Canvas(const Canvas& c);
public:
	Canvas(const Point& p , Color c); //constructor
	~Canvas();
	void draw();
	void scale(const int& factor);
	double area();
	void insert_shape(Shape* shape);
	//Canvas& operator=(const Canvas& c);
	static int m_counter;
};

