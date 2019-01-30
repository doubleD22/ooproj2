#include <iostream>
#include "Point.h"
#include "Line.h"
#include "C_Line.h"
using namespace std;

int main(void)
{
	Line l1(Point(100, 100), Point(200, 200));
	l1.draw();
	cout << "Line length: " << l1.length() << endl;
	cout << endl;

	C_Line l2(Point(1, 1), Point(20, 20), color::red);
	l2.draw();
	cout << "Line length: " << l2.length() << endl;
	cout << endl;

	return 0;
}

















































/*
Line * p;
p=&l1;
p->draw();
cout<<endl;

p=&l2;
p->draw();
cout<<endl;
*/