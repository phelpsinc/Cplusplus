#include "stdafx.h"
#include "Circle.h"//Including the header file for the class.
//Implementation File

Circle::Circle() //Default Constructor and Init the member variables.
//Classes are helpful for defining member variables.
{
	radius = 0;
	piMeToo = 3.14159;
}

Circle::Circle(double r)
{
	radius = r; //Accept the Radius Value.
	piMeToo = 3.14159; // Need to properly format the output.
}

Circle::~Circle()
{
}

void Circle::setRadius(double rad)
{
	radius = rad;
}

double Circle::getRadius() const //Accessor Function.
{
	return radius;
}
double Circle::getArea() const  //Returns the Area.
{
	 return (piMeToo * radius * radius);
}

double Circle::getDiameter() const //Accessor Function.
{
	return radius * 2;
}

double Circle::getCircumference() const //Accessor Function.
{
	return 2 * piMeToo * radius;
}