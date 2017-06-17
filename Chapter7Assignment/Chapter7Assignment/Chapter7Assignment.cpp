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

	//Open the file.
	inputFile.open("C:\\cplusplus\\numbers.txt");

	//Read the contents of the file into numbers
	while (count < ARRAY_SIZE && inputFile >> numbers[count])
		count++; // Add do the count.

	//Close the input file.
	inputFile.close();

	for (int count = 0; count < ARRAY_SIZE; count++)
	{
		total += numbers[count];
		average = total / ARRAY_SIZE;

	}
	
	cout << average << endl << endl;
	system("pause");

    return;
}

