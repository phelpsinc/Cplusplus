// cps202week1chapter6.cpp : Defines the entry point for the console application.
//============================================================
// Name: Chuck Phelps
// Created: 06/13/2017
// Updated: 06/13/2017
// Purpose: To accept user input for two integers and execute mathmatical instructions based upon the switch menu.
//=============================================================

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//Defining the fucntion multiFunction. The fucntion will accept two double arguments and a character argument.
int multiFunction(int, int, char);
void mathMenuFucntion();

void main()
{
	//Define variables within the main fucntion. 
	int intone;
	int inttwo;

	//Initialize constant chars for the mathatics 
	const char PLUS = 1;
	const char MINUS = 2;
	const char DIVIDE = 3;
	const char MULTIPLY = 4;

	//Initialize char.
	char menuMath;

	cout << "Please enter the first integer that you would like to execute mathmatics on." << endl
		<< "Then press enter.";
	cout << endl;
	cin >> intone;

	cout << endl;

	cout << "Please enter the second integer that you would like to execute mathmatics on."
		<< "Then press enter";
	cout << endl;
	cin >> inttwo;

	mathMenuFucntion();
	cin >> menuMath;


	multiFunction(intone, inttwo, menuMath);

	cout << endl << endl;

	system("pause");
	return;
}

int multiFunction(int a, int b, char c)
{
	//Switche menu logic was baked to determine the add, subtract, divide or multiply.
	switch (c)
	{
	case '1': cout << endl << endl;
		int add;
		add = a + b;
		cout << "You have chosed addition. Here are your results. " << endl << endl;
		cout << add;
		break;
		cout << endl << endl;
		return add;
	case '2': cout << endl << endl;
		int subt;
		subt = a - b;
		cout << "You have chosed subtraction. Here are your results. ";
		cout << endl << endl;
		cout << subt;
		break;
		cout << endl << endl;
		return subt;
	case '3': cout << endl << endl;
		int divd;
		divd = a / b;
		cout << "You have chosed subtraction. Here are your results. ";
		cout << endl << endl;
		cout << divd;
		break;
		cout << endl << endl;
		return subt;
	case '4': cout << endl << endl;
		int mult;
		mult = a * b;
		cout << "You have chosed subtraction. Here are your results. ";
		cout << endl << endl;
		cout << mult;
		break;
		cout << endl << endl;
		return mult;
	
	}
}

void mathMenuFucntion()
{
	// Display the math menu choices
	cout << "Choose the mathmatic function to execute on the numbers selected. \n"
		<< endl << endl
		<< "Choose\n"
		<< endl
		<< "(1) Plus (+)\n"
		<< "(2) Minus (-) \n"
		<< "(3) Divide (/) \n"
		<< "(4) Multiply (*) : \n";
}
