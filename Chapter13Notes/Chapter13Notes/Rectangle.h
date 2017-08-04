#pragma once
//Also known as specification file.
class Rectangle
{
protected: //Treat them as private for anyone outside of these classes.
	double length; 
	double width;
	static int rectCount;
	 
public:
	Rectangle();
	Rectangle(double, double);
	Rectangle(double);
	Rectangle(const Rectangle&); // Copy Constructor.
	~Rectangle();
	double getlength() const; //Accessor Fucntions
	double getwidth() const; //Accessor Fucntions
	double getArea() const; //Accessor Fucntions
	double getPerimeter() const;
	void setLength(double); //Mutator Fucntion
	void setWidth(double value); //Mutator Fucntion
	static int getRectCount();
	virtual void print() const;
};


