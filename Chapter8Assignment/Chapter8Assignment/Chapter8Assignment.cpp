// Chapter8Assignment.cpp : Defines the entry point for the console application.
//============================================================
// Name: Chuck Phelps
// Created: 06/17/2017
// Updated: 06/17/2017
// Purpose: To accept user input for two integers and execute mathmatical instructions based upon the switch menu.
// Assignment: Chapter 8 Assignment
//=============================================================

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

//Prototype for the stringSearch.
int stringSearch(string array[], int size, string);

void main()
{
	const int NUM_NAMES = 10;
	string names[NUM_NAMES] = { "baboon", "giraffe", "hippopotamus", "lion", "monkey", "rhinoceros", "tapir", "tiger", "wildebeest", "zebra" };

	string searchString; //Initialize the search variable and needs to be a string.
	int resultsString; //Initialize the resultsString needs to be an into retrun an int.
	
	
	cout << endl;

	//Accept input from the user to search for a animal.
	cout << "Enter the animal that you would like to search for: <Press Enter>";
	cin >> searchString;

	cout << endl << endl;

	resultsString = stringSearch(names, NUM_NAMES, searchString);

	cout << resultsString << endl << endl;

	//Setting up the string after the results of the int function.
	string animalName = names[resultsString]; 

	if (resultsString == -1)
	{
		cout << "That animal does not exsit in this array." <<endl;
	}
	else {
		//The subscript of where the animal exists will be displayed here.
		cout << "The subscript(element) in which the animial is located " << resultsString << "." << endl;
		cout << "The name of the animal is " << animalName << "." << endl <<endl; 
	}

	system("pause");

	return;
}

//***************************************************************
// The binarySearch function performs a binary search on an     *
// integer array. array, which has a maximum of size elements,  *
// is searched for the number stored in value. If the number is *
// found, its array subscript is returned. Otherwise, -1 is     *
// returned indicating the value was not in the array.          *
//***************************************************************

int stringSearch(string array[], int size, string value) //Array needs to be int to return an int kept attepting with string.
{
	int first = 0,             // First array element
		last = size - 1,       // Last array element
		middle,            // Mid point of search
	 	position = -1;         // Position of search value
	bool found = false;        // Flag

	
	while (!found && first <= last)
	{
		middle = (first + last) / 2;     // Calculate mid point
		if (array[middle] == value)      // If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value)  // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;           // If value is in upper half
	}
	return position;
}