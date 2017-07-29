//============================================================
// Name: Chuck Phelps
// Created: 07/21/2017
// Updated: 07/22/2017
// Assignment: Chapter 13 Assignment Define a Circle Class.
//=============================================================

#include "stdafx.h"
#include <iostream>
#include "Circle.h"
#include <iomanip>

using namespace std;

void main()
{
	double radius; //Declare radius that will be passed to the Circle class.
	char againYN; //Hold the character to continue the program or not.


	do {
		cout << endl << "Enter the radius of the circle: ";
		cin >> radius;
		Circle rad(radius);
		cout << endl << endl;

		cout << fixed << showpoint;
		cout << setprecision(2);

				
		cout << "The Circle's Radius is : " << rad.getRadius() << endl;
		cout << "The Circle's Area is : " << rad.getArea() << endl;
		cout << "The Circle's Circumference is : " << rad.getCircumference() << endl;
		cout << "The Circle's Diameter is : " << rad.getDiameter() << endl;

		cout << endl << endl;
		cout << "Do you want to enter a new radius to use? Y or N? ";
		cin >> againYN;
		cin.ignore();
	}

	while (againYN == 'Y' || againYN == 'y');
	{
		cout << endl << endl; // Added for cleanlyness.
		cout << "Thanks for using our radius program. Please press enter to close out.";
		cout << endl << endl;
		system("pause");
		return;
	}
}

