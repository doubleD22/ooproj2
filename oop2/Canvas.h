#pragma once
#include "Shape.h"

class Canvas : public Shape
{
private:
	Shape ** m_shapes;	 //creating an array of pointers of shapes
	int m_length;	   // the lenght of the array = how mant shapes there are
	Canvas(const Canvas& c);  //CC
public:
	Canvas(const Point& p , Color c); //constructor
	~Canvas(); //destructor 
	void draw();
	void scale(const int& factor);
	double area();
	void insert_shape(Shape* shape); // inserting a pointer of shape in the array of pointers
	//Canvas& operator=(const Canvas& c);
	static int m_counter; //counting how many shape of Canvas we have
};

