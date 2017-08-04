//Chapter 13 notes
#include "stdafx.h"
#include "Box.h" // Box.h pulls in the Reactange Class.
#include <iostream>

using namespace std;

void callPrint(Rectangle *);

void main()
{
	double mLen = 29.6;
	double mWid = 14.5; // Defining a variable.
	double mHgt = 10.9;

	
	//Rectangle rect1(mLen, mWid);
	Rectangle *rect1;
	rect1 = new Rectangle(mLen, mWid);

	//cout << rect1.getlength() << endl;
	//cout << rect1.getwidth() << endl;
	//cout << rect1.getPerimeter() << endl;
	//cout << rect1.getArea() << endl;
	//rect1.print();
	callPrint(rect1);

	cout << endl << endl;

	//Box box1(mLen, mWid, mHgt); //Base constructor will go to the base class. If nothing is specified for example Box box1 with no inputs.
	Box *box1;
	box1 = new Box(mLen, mWid, mHgt);

	//cout << box1.getlength() << endl;
	//cout << box1.getwidth() << endl;
	//cout << box1.getHeight() << endl;
	//cout << box1.getArea() << endl; 
	//cout << box1.getVolume() << endl;

	cout << endl;

	//box1.print();
	callPrint(box1);
		

	system("pause");
	return;
}

void callPrint(Rectangle *p)
{
	p->print();
	return;
}
