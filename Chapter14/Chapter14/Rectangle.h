#pragma once
//Also known as specification file.
class Rectangle
{
private:
	double length; 
	double width;
	 
public:
	Rectangle();
	Rectangle(double, double);
	Rectangle(double);
	~Rectangle();
	double getlength() const; //Accessor Fucntions
	double getwidth() const; //Accessor Fucntions
	double getArea() const; //Accessor Fucntions
	double getPerimeter() const; //Accessor Fucntions
	void setLength(double); //Mutator Fucntion
	void setWidth(double); //Mutator Fucntion
};

