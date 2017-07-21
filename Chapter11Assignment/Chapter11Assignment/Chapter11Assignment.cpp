//============================================================
// Name: Chuck Phelps
// Created: 07/10/2017
// Updated: 07/12/2017
// Purpose: The program will keep a list of three test scores for one student.  Structures must be declared out of the main.
// The program may prompt the user for the name, ID number, and test scores, or these may be assigned within the program.  
// The average test score will be calculated and stored in the average member of the structure.
// Assignment: Chapter 11 Assignment
//=============================================================

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct students // Hold the variables and information for student Grade structure.
{
	string Name; // Contains Students Name.
	int IDNum; // Store Student ID of the student.
	double Tests[3];//Define an Array within the structure.
	double Average; // Hold the average of the grades.
	double Grade[4] = {91, 81, 71, 61}; // Initialized the array 
};



void enterStudentInfo(students *); //Proto Type.

void main() {

	double total = 0; //Set the total to 0.

	students studentsInfo; // Set variable for the object so data can be stored.
	
	cout << endl << endl;

	enterStudentInfo(&studentsInfo); //Pass data by reference for efficeny. 

	cout << endl << endl; // Cleanlyness spacing.

	
	//Read out information entered in the function.
	cout << setprecision(2);
	cout << "Name: " << studentsInfo.Name << endl;
	cout << "ID Number: " << studentsInfo.IDNum << endl;
	cout << "Grade One: " << studentsInfo.Tests[0] << endl;
	cout << "Grade Two: " << studentsInfo.Tests[1] << endl;
	cout << "Grade Three: " << studentsInfo.Tests[2] << endl;

	for (int x = 0; x < 3; x++)
	{
		total += studentsInfo.Tests[x]; // Gathers the total of the array numbers.
		studentsInfo.Average = total / 3; // Gets the average of the numbers
	}

	cout << "Average: " << studentsInfo.Average << endl;

	if (studentsInfo.Average >= studentsInfo.Grade[0]) // Else if statement used to deteremine a number value from the enumated values.
	{
		cout << "This student has received an A." << endl;
	} 
	
	else if (studentsInfo.Average >= studentsInfo.Grade[1]) { // Need to see which was greater than.
		cout << "This student has received an B." << endl;
	}

	else if (studentsInfo.Average >= studentsInfo.Grade[2]) {
		cout << "This student has received an C." << endl;
	}

	else if (studentsInfo.Average >= studentsInfo.Grade[3]) {
		cout << "This student has received an D." << endl;
	}
	else
	{
		cout << "You have received an F." << endl;
	}

	cout << endl << endl;

	system("pause");
	return;
}


void enterStudentInfo(students *s) // No semicolon here. The is for the pointer.
{
	cout << endl << endl;

	//Collect the students name.
	cout << "Enter Student Name : ";
	getline(cin, s->Name);

	//Collect the Students ID.
	cout << "Enter Student ID: ";
	cin >> s->IDNum;
	
	//Collect Test Score 1
	cout << "Enter the first Test Score: ";
	cin >> s->Tests[0];

	//Collect Test Score 2
	cout << "Enter the second Test Score: ";
	cin >> s->Tests[1];

	//Collect Test Score 2
	cout << "Enter the second Test Score: ";
	cin >> s->Tests[2];


}