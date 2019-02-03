#pragma once
#include <iostream>
#include "Canvas.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Line.h"
#include <time.h>


using namespace std;



//Shape* shape_randomize(int canvas_counter)
//{
//	Shape* s;
//	Point rand_org = point_randomize();
//	Color rand_color = color_randomize();
//	srand((unsigned)time(NULL));
//	int shape;
//	if (canvas_counter > 3)
//		shape = rand() % 2;
//	else
//		shape = rand() % 3;
//	switch (shape)
//	{
//	case 0:	//circle case
//	{
//		srand((unsigned)time(NULL));
//		int rand_radius = rand() % 10;
//		s=&Circle(rand_org, rand_radius, rand_color);
//		break;
//	}
//	case 1:	//line case
//	{
//		Point rand_end = point_randomize();
//		s = &Line(rand_org, rand_end, rand_color);
//		break;
//	}
//	case 2:	//rectangle case
//	{
//		Point rand_p2 = point_randomize();
//		s = &Rectangle(rand_org, rand_p2, rand_color);
//		break;
//	}
//	case 3:	//canvas case
//	{
//		s = random_canvas();
//		break;
//	}
//	}
//	return s;
//
//}


Point point_randomize()
{
	srand((unsigned)time(NULL));
	int x = rand()%30;
	srand((unsigned)time(NULL));
	int y = rand()%30;
	return Point(x, y);
}

Color color_randomize()
{
	srand((unsigned)time(NULL));
	return Color(rand() % 6);
}



void shapes_creator(Canvas& c, unsigned size)
{

}


void test()
{
	srand((unsigned)time(NULL));
	int size = rand() % 6;
	Canvas rand_canvas(point_randomize(), color_randomize(), size);
	shapes_creator(rand_canvas, rand_canvas)
	
}












int main()
{
	////Canvas& c1 = random_canvas();
	////c1.draw();
	//Point org(0, 0);
	//Line l1(Point(1, 3), Point(3, 1), Color::red), l2(Point(5, 0), Point(4, 1),Color::red);
	//Circle c1(Point(5, 5), 7, Color::green);
	//Rectangle r1(Point(1, 3), Point(7, 8), Color::blue);
	//Canvas canv(org, Color::white);
	//canv.insert_shape(&l1);
	//canv.insert_shape(&l2);
	//canv.insert_shape(&c1);
	//canv.insert_shape(&r1);
	////canv.draw();
	//canv.move(Point(10, 10));
	//canv.draw();
	////canv.who_am_i();
	//canv.scale(2);
	//canv.draw();
	test();


}