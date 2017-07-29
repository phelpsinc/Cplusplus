//Chapter 13 notes
#include "stdafx.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

void main()
{
	double mLen = 29.6;
	double mWid = 14.5; // Defining a variable.

	Rectangle rect1(mLen, mWid); // Instaniate an object
	Rectangle rect2 = rect1; // Deomstrating the copy constructor.
	
	rect2.setLength(54.3);

	cout << rect1.getlength() << endl;
	cout << rect1.getwidth() << endl;
	cout << rect1.getPerimeter() << endl;
	cout << rect1.getArea() << endl;

	cout << rect2.getlength() << endl;
	cout << rect2.getwidth() << endl;
	cout << rect2.getPerimeter() << endl;
	cout << rect2.getArea() << endl;

	cout << Rectangle::getRectCount() << endl; // Display the number of objects.

	system("pause");
	return;
}
