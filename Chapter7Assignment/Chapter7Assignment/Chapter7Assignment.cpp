// Chapter7Assignment.cpp : Defines the entry point for the console application.
//============================================================
// Name: Chuck Phelps
// Created: 06/13/2017
// Updated: 06/13/2017
// Purpose: To accept user input for two integers and execute mathmatical instructions based upon the switch menu.
// Assignment: Chapter 7 Assignment
//=============================================================

#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

void main()
{

	const int ARRAY_SIZE = 12; // The size of the array.
	int numbers[ARRAY_SIZE];
	int count = 0;
	ifstream inputFile;

	double total = 0; //This variable will hold the total.
	int average; //This variable will hold the average.
	
	int highest; //Initialize the variable that will hold the highest value.
	int lowest; //Initlialize the variable that will hold the lowest value.

	

	//Open the file.
	inputFile.open("C:\\cplusplus\\numbers.txt");

	//Read the contents of the file into numbers
	while (count < ARRAY_SIZE && inputFile >> numbers[count])
		count++; // Add do the count.

	//Close the input file.
	inputFile.close();

	for (int count = 0; count < ARRAY_SIZE; count++)
	{
		total += numbers[count]; // Gathers the total of the array numbers.
		average = total / ARRAY_SIZE; // Gets the average of the numbers
	}

	//Needed to start another for loop and start the numbers at position 0.
	//This way you can start another comparison.

	highest = numbers[0];
	lowest = numbers[0];

	for (int count = 1; count < ARRAY_SIZE; count++)
	{
		if (numbers[count] < lowest) //Gets the lowest numbers
		{
			lowest = numbers[count];

		}
		else if (numbers[count] > highest) //Gets the highest number.
		{
			highest = numbers[count];
		}

	}

						
	
	cout << "The Lowest Number is " << lowest << endl << endl;
	cout << "The Highest Number is " << highest << endl << endl;
	cout << "The Total is " << total << endl << endl;
	cout << "The Average is " << average << endl << endl;

	system("pause");

    return;
}

