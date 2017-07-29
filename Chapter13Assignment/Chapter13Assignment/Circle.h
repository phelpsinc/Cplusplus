#pragma once
class Circle //Declaration File.
{

private: //Private Member Variables.
	double radius;
	double piMeToo;

public:
	Circle();
	Circle(double);
	~Circle();
	void setRadius(double); //Mutator Function. 
	double getRadius() const; //Accessor Function.
	double getArea() const; //Accessor Function.
	double getDiameter() const; //Accessor Function.
	double getCircumference() const; //Accessor Function.
	

};

