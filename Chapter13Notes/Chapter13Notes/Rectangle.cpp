//Implementation File.
#include "stdafx.h"
#include "Rectangle.h" // Include the .h file

Rectangle::Rectangle() //Default Constructor.

{
	length = 0; // Setting them to zero.
	width = 0;
}

Rectangle::Rectangle(double l, double w) // This code is fired off first, init variables, opening files, memory allocation.
//Length is first and w is second.
{
	length = l; // Setting them to zero.
	width = w;
}

Rectangle::Rectangle(double s) // This code is fired off first, init variables, opening files, memory allocation.
										 //Length is first and w is second.
{
	length = s; // Setting them to zero.
	width = s;
}

Rectangle::~Rectangle() // Close out files, close out tables, clean up.
{
	
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