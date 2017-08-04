#pragma once
#include "Rectangle.h"
class Box :
	public Rectangle //Public Access to Rectangle.
{
private:
	double height;

public:
	Box();
	~Box();
	Box(double, double, double);
	double getHeight() const; //Accessor Fucntions
	double getArea() const; //Accessor Fucntions
	double getVolume() const; //Accessor Fucntions
	void setHeight(double); //Mutator Fucntion
	void setWidth(double value); //Mutator Fucntion
	void print() const;
};

