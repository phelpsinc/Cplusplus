#pragma once
class VerifyDate //Specification File.
{

private: //Private Member Variables and Class.
	int month;
	int day;
	int year;

	bool IsLeap(); // Private fucntion.
	

public: //Public Class
	VerifyDate(); //Default Constructor 1.
	//VerifyDate(int, int, int); //Default Constructor 2.
	~VerifyDate();

	void setMonth(int); //Mutator Function.
	void setDay(int); //Mutator Function.
	void setYear(int); //Mutator Function.
	int getMonth() const; //Accessor Function.
	int getDay() const; // Accessor Function.
	int getYear() const; //Accessor Function.
	void printDate(); //Accessor Function.
	bool getLeapCheck(); // Will Check the data with this function.
	void CheckDate(int, int, int); //Validates the dates are within the range.
	
};

