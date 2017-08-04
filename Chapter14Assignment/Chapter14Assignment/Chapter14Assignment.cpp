//============================================================
// Name: VerifyClass
// Author: Chuck Phelps
// Created: 07/28/2017
// Updated: 07/30/2017
// Assignment: Chapter 14 Assignment Define a Circle Class.
//=============================================================

#include "stdafx.h"
#include <iostream>
#include "VerifyDate.h"
#include <iomanip> //Needed for exit.

using namespace std;

void main()
{
	int month, day, year; //Declare month, day and year.
	int monthT, dayT, yearT; // These varibles will be used for date validation. 

	char againYN; //Hold the character to continue the program or not.


	do {
		VerifyDate Test; // Testing the function to make sure the default constructor is working.
		Test.printDate();
		cout << endl << endl;
		
		VerifyDate vDate; //Defining the instance of the VerifyDate Class.

		cout << endl << "Please enter the date you would like to check below." << endl;
		cout << "Enter the Month (01 - 12): ";
		cin >> month;
		vDate.setMonth(month); //Placing the public functions in place so that the program will exit if incorrect.
		cout << endl << endl;
		cout << "Enter the Day (01 - 31): ";
		cin >> day;
		vDate.setDay(day); //Placing the public functions in place so that the program will exit if incorrect.
		cout << endl << endl;
		cout << "Enter the Year (1850 - 2100): ";
		cin >> year;
		vDate.setYear(year); //Placing the public functions in place so that the program will exit if incorrect.
		cout << endl << endl;
		
		vDate.printDate();// Calling the print date to show the new date printed.

		//cout << "The date you have entered is " << vDate.getMonth() << "/" << vDate.getDay() << "/" << vDate.getYear();
		cout << endl << endl;

		cout << "Now lets check to make sure the date that you entered is valid." << endl;

		monthT = vDate.getMonth(); //Calling this class fuctions to get the current month.
		dayT = vDate.getDay(); //Calling this class fuctions to get the current day.
		yearT = vDate.getYear(); //Calling this class fuctions to get the current year.

		vDate.CheckDate(monthT, dayT, yearT); //Validate that the date matches what we want.

		cout << endl << endl;
		cout << "Do you want to enter a new date to use? Y or N? ";
		cin >> againYN;
		cin.ignore();
	}

	while (againYN == 'Y' || againYN == 'y');
	{
		cout << endl << endl; // Added for cleanlyness.
		cout << "Thanks for using our date checking program. Please press enter to close out.";
		cout << endl << endl;
		system("pause");
		return;
	}
}