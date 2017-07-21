//Chapter 13 notes
#include "stdafx.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

void main()
{
	double mLen = 29.6;
	double mWid = 14.5; // Defining a variable.

	Rectangle rect(mLen, mWid); // Instaniate an object

	//rect.setLength(mLen);//Rectangle class and execute the setLength function.
	//rect.setWidth(mWid);

	cout << rect.getlength() << endl;
	cout << rect.getwidth() << endl;
	cout << rect.getPerimeter() << endl;
	cout << rect.getArea() << endl;


	system("pause");
	return;
}
