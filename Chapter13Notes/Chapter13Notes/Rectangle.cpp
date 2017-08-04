//Implementation File.
#include "stdafx.h"
#include "Rectangle.h" // Include the .h file
#include <iostream>

using namespace std;

int Rectangle::rectCount = 0; //Outside of any of the fucntions.

Rectangle::Rectangle() //Default Constructor.

{
	length = 0; // Setting them to zero.
	width = 0;
	rectCount++; //Adding a counter to the constructors
}

Rectangle::Rectangle(double l, double w) // This code is fired off first, init variables, opening files, memory allocation.
//Length is first and w is second.
{
	
	length = l; // Setting them to zero.
	width = w;
	rectCount++; //Adding a counter to the constructors
}

Rectangle::Rectangle(double s) //This can be used for a square.

{
	
	length = s; //Setting variable to s for a square.
	width = s;
	rectCount++; //Adding a counter to the constructors
}

Rectangle::Rectangle(const Rectangle &obj)//This will send to the variables below coming from the orginal object.
{
	length = obj.length; //Setting variable to s for a square.
	width = obj.width;
	rectCount++; //Adding a counter to the constructors
}

Rectangle::~Rectangle() // Close out files, close out tables, clean up.
{
	rectCount--;
}

double Rectangle::getlength() const
{
	return length;
}
double Rectangle::getwidth() const
{
	return width;
}
double Rectangle::getArea() const // Derived Attributes.
{
	return width * length;
}
double Rectangle::getPerimeter() const
{
	return length + length + width + width;
}
void Rectangle::setLength(double value)
{
	length = value;
	return;
}
void Rectangle::setWidth(double value)
{
	width = value;
	return;
}

int Rectangle::getRectCount()
{
	return rectCount;
}

void Rectangle::print() const
{
	cout << "lenth = " << length << "width = " << width << endl;
}

