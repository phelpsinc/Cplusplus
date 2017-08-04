#include "stdafx.h"
#include "VerifyDate.h"
#include <iostream> // Included for the printDate Function initally 07/29/2017.
#include <stdlib.h> 

//Implementation File.

using namespace std; // Also needed for cout.

VerifyDate::VerifyDate() //The default constructor will pass these value down the stack.
//The default month, day, and year can be pulled from the get functions.
{
	month = 1; //Set the default month.
	day = 1; //Set the default day.
	year = 2000; // Set the default year.
}


VerifyDate::~VerifyDate()
{
}

bool VerifyDate::IsLeap() //Test to see if a year is a leap year.
{
	
	if(year % 400 == 0) //If a year is divisilbe by 400 return true.
	{
		return true;
	}
	else if(year % 100 != 0 && year % 4 == 0) { //If the year is not divisble by 100 but divisible by 4 it is a leap year.

		return true;
	}
	else if(year % 400 != 0 && year % 100 == 0) { // If the year is not divisble by 400 but 100 it is not a leap year.
		
		return false;
	}
		
}

void VerifyDate::setMonth(int mm) //Mutator Function to Set the Month when called otherwise it will be 1.
{
	if (mm >= 1 && mm <= 12)
	{
		month = mm;
		return;
	}
	else
	{
		cout << endl << endl;
		cout << "Invalid Month Data Entered. Program will now be Aborted!" <<endl;
		system("pause");
		exit(2);
	}
	
}

void VerifyDate::setDay(int dd) //Mutator Function to Set the Day when called otherwise it will be 1.
{
	if (dd >= 1 && dd <= 31)
	{
		day = dd;
		return;
	}
	else
	{
		cout << endl << endl;
		cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
		system("pause");
		exit(2);
	}
}

void VerifyDate::setYear(int yyyy) //Mutator Function to Set the Year when called other wise it will be 2000.
{
	if (yyyy >= 1850 && yyyy <= 2100)
	{
		year = yyyy;
		return;
	}
	else
	{
		cout << endl << endl;
		cout << "Invalid Year Data Entered. Program will now be Aborted!" << endl;
		system("pause");
		exit(2);
	}
}

int VerifyDate::getMonth() const
{
	return month;
}

int VerifyDate::getDay() const
{
	return day;
}

int VerifyDate::getYear() const

{
	return year;
}


//Calls the private function to be able to determine if the year entered is a leap year or not.
bool  VerifyDate::getLeapCheck()

{
	bool leap; //sets a leap variable.
	leap = IsLeap();
	
	if (leap == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void VerifyDate::printDate() //printDate function that displays the month, day, and year.
{
	cout << "The current date is " << getMonth() << "/" << getDay() << "/" << getYear() << ".";
	return;
}

void VerifyDate::CheckDate(int mm2, int dd2, int yyyy2)
{
 // The case statement is checking the number entered in mm2.	
	switch (mm2)
	{
	case (1): if (dd2 >= 1 && dd2 <= 31)
	{
		cout << endl << endl;
		cout << mm2 << " is the month of January is correct and has the correct number of days!" << endl;
	}
			  else
			  {
				  cout << endl << endl;
				  cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
				  system("pause");
				  exit(2);
			  }
			  break; //Need to have breaks and not returns otherwise we will leave the function.
	case (2): if (getLeapCheck() == 0)
	{

		if (dd2 >= 1 && dd2 <= 28)
		{
			cout << endl << endl;
			cout << mm2 << " is the month of February is correct and has the correct number of days!" << endl;
		}
		else
		{
			cout << endl << endl;
			cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
			system("pause");
			exit(2);
		}
		break;
	}
			  else
	{
				  if (dd2 >= 1 && dd2 <= 29)
				  {
					  cout << endl << endl;
					  cout << mm2 << " is the month of February is correct and has the correct number of days!" << endl;
					  cout << "It is also a leap year!";
				  }
				  else
				  {
					  cout << endl << endl;
					  cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
					  system("pause");
					  exit(2);
				  }
				  break; //Need to have breaks and not returns otherwise we will leave the function.
	}

	case (3): if (dd2 >= 1 && dd2 <= 31)
	{
		cout << endl << endl;
		cout << mm2 << " is the month of March is correct and has the correct number of days!" << endl;
	}
			  else
			  {
				  cout << endl << endl;
				  cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
				  system("pause");
				  exit(2);
			  }
			  break; //Need to have breaks and not returns otherwise we will leave the function.
	case (4): if (dd2 >= 1 && dd2 <= 30)
	{
		cout << endl << endl;
		cout << mm2 << " is the month of April is correct and has the correct number of days!" << endl;
	}
			  else
			  {
				  cout << endl << endl;
				  cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
				  system("pause");
				  exit(2);
			  }
			  break; //Need to have breaks and not returns otherwise we will leave the function.
	case (5): if (dd2 >= 1 && dd2 <= 31)
	{
		cout << endl << endl;
		cout << mm2 << " is the month of May is correct and has the correct number of days!" << endl;
	}
			  else
			  {
				  cout << endl << endl;
				  cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
				  system("pause");
				  exit(2);
			  }
			  break; //Need to have breaks and not returns otherwise we will leave the function.
	case (6): if (dd2 >= 1 && dd2 <= 30)
	{
		cout << endl << endl;
		cout << mm2 << " is the month of June is correct and has the correct number of days!" << endl;
	}
			  else
			  {
				  cout << endl << endl;
				  cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
				  system("pause");
				  exit(2);
			  }
			  break; //Need to have breaks and not returns otherwise we will leave the function.
	case (7): if (dd2 >= 1 && dd2 <= 31)
	{
		cout << endl << endl;
		cout << mm2 << " is the month of July is correct and has the correct number of days!" << endl;
	}
			  else
			  {
				  cout << endl << endl;
				  cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
				  system("pause");
				  exit(2);
			  }
			  break; //Need to have breaks and not returns otherwise we will leave the function.
	case (8): if (dd2 >= 1 && dd2 <= 31)
	{
		cout << endl << endl;
		cout << mm2 << " is the month of August is correct and has the correct number of days!" << endl;
	}
			  else
			  {
				  cout << endl << endl;
				  cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
				  system("pause");
				  exit(2);
			  }
			  break; //Need to have breaks and not returns otherwise we will leave the function.
	case (9): if (dd2 >= 1 && dd2 <= 30)
	{
		cout << endl << endl;
		cout << mm2 << " is the month of September is correct and has the correct number of days!" << endl;
	}
			  else
			  {
				  cout << endl << endl;
				  cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
				  system("pause");
				  exit(2);
			  }
			  break; //Need to have breaks and not returns otherwise we will leave the function.
	case (10): if (dd2 >= 1 && dd2 <= 31)
	{
		cout << endl << endl;
		cout << mm2 << " is the month of October is correct and has the correct number of days!" << endl;
	}
			  else
			  {
				  cout << endl << endl;
				  cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
				  system("pause");
				  exit(2);
			  }
			  break; //Need to have breaks and not returns otherwise we will leave the function.
	case (11): if (dd2 >= 1 && dd2 <= 30)
	{
		cout << endl << endl;
		cout << mm2 << " is the month of November is correct and has the correct number of days!" << endl;
	}
			  else
			  {
				  cout << endl << endl;
				  cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
				  system("pause");
				  exit(2);
			  }
			  break; //Need to have breaks and not returns otherwise we will leave the function.
	case (12): if (dd2 >= 1 && dd2 <= 31)
	{
		cout << endl << endl;
		cout << mm2 << " is the month of December is correct and has the correct number of days!" << endl;
	}
			   else
			   {
				   cout << endl << endl;
				   cout << "Invalid Day Data Entered. Program will now be Aborted!" << endl;
				   system("pause");
				   exit(2);
			   }
	
			   break; //Need to have breaks and not returns otherwise we will leave the function.

	default: cout << endl << endl;
		cout << "Invalid Month Data Entered. Program will now be Aborted!" << endl;
		system("pause");
		exit(2);
	}
	

	if (yyyy2 >= 1850 && yyyy2 <= 2100) // Checking the year to make sure that it is within range.
	{
		year = yyyy2;
		cout << endl << endl;
		cout << "The year of " << year << " is correct! It is within range of 1850 and 2100!" << endl;

		if (getLeapCheck() == 1)
		{
			cout << "This is a Leap Year!";
		}

		return;
	}
	else
	{
		cout << endl << endl;
		cout << "Invalid Year Data Entered. Program will now be Aborted!" << endl;
		system("pause");
		exit(2);
	}
}