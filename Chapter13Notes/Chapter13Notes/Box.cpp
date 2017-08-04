#include "stdafx.h"
#include "Box.h"
#include <iostream>
using namespace std;

Box::Box()
{
	height = 0.0;
}


Box::~Box()
{
}

Box::Box(double l, double w, double h) : Rectangle(l, w)
{
	height = h;
	return;
}
double Box::getHeight() const//Accessor Fucntions
{
	return height;
}
double Box::getArea() const //Accessor Fucntions
{
	//return 2 * (getlength() * getwidth() + getlength() * height + getwidth() + height);
	return 2 * (length * width + length * height + width + height); // Can access directly length and width with protected.
}
double Box::getVolume() const //Accessor Fucntions
{
	//return Rectangle::getArea() * height;
	return length * width * height; //Can access these variables becuase they are protected.
}
void Box::setHeight(double) //Mutator Fucntion
{

}
void Box::setWidth(double value) //Mutator Fucntion
{
	height = value;
	return;
}

void Box::print() const
{
	Rectangle::print();
	cout << " height = " << height << endl;
}