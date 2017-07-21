// Chapter8Assignment.cpp : Defines the entry point for the console application.
//============================================================
// Name: Chuck Phelps
// Created: 06/22/2017
// Updated: 06/24/2017
// Purpose: To to pass an array to a function and dynamically create an array.
// Assignment: Chapter 9 Assignment
//=============================================================

#include "stdafx.h"
#include <iostream>

using namespace std;

void dispNewArray(const int [], int);

void main() {

	const int ARRAY_SIZE = 5; //Define the array size.
	int newA[ARRAY_SIZE] = { 23, 56, 78, 98, 12 }; //5 elements in the array.

	for (int x = 0; x < 5; x++) //Printing the variable prior to sending the values to the function.
	{
		cout << "The value of index\\element before the function call is " << x << " " << newA[x] << endl;
	}

	cout << endl << endl; //Cleaning up the output with some new lines.

	dispNewArray(newA, ARRAY_SIZE);//The fucntion call 

	cout << endl << endl; //Cleaning up the output with some new lines.

	for (int x = 0; x < 5; x++)
	{
		cout << "The value of index\\element after the function call is " << x << " " << newA[x] << endl;
	}

	cout << endl << endl;

	system("pause");
	return;

}

void dispNewArray(const int arr[], int size)
{
	int *ptrA = nullptr; //Making the Null Pointer.
	const int ARRAY_SIZEA = size; //Set up the array size variable.
	ptrA = new int[ARRAY_SIZEA];// Setting up the new array.
	

	for (int x = 0; x < size; x++)
	{
		ptrA[x] = arr[5 - 1 - x];//Reverse the order of the orginal array. calling the value of each array.
		cout << "Now lets see that in reverse, the indexes are " << x << " " << *(ptrA + x) << endl; //Display the value.
	}

	//Free up the memory that the array was passed to.
	delete[] ptrA; // Delete the ptrA.
	ptrA = nullptr;

	cout << endl << endl;
	//Validate that the memory has been cleared.
	cout << "Validating that we have cleared ptrA, with a value of " << ptrA;

	return;

	
}

