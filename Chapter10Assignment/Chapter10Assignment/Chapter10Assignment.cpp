//============================================================
// Name: Chuck Phelps
// Created: 07/04/2017
// Updated: 07/07/2017
// Purpose: To to pass an array to a function and dynamically create an array. It
// will also convert a C-String of AbCd to ABCD, abcd, and aBcD.
// Assignment: Chapter 10 Assignment
//=============================================================

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void ABCDArray(char [], int);//Upper Array.
void abcdArray(char[], int);//Lower Array.
void aBcDArray(char[], int);//Reverse Array.

void main() {

	const int ARRAY_SIZE = 5; // Setting the const int to 5 so that we can include the null terminator.
	char charAbcDArray[ARRAY_SIZE];
	strcpy(charAbcDArray, "AbCd"); //Copy AbCd into my char array.

	cout << "The First C-String is standard --> ";

	for (int x = 0; x < 5; x++) //Printing the variable prior to sending the values to the function.
	{
		cout << charAbcDArray[x];
	}

	cout << endl << endl; //Provide spacing for each line.

	cout << "The Second C-String is on Uppers --> ";

	ABCDArray(charAbcDArray, ARRAY_SIZE);// Calling the Upper Fucntions.

	cout << endl << endl;

	cout << "The Thrid C-String is on Lowers --> ";

	abcdArray(charAbcDArray, ARRAY_SIZE);// Calling the Upper Fucntions.

	cout << endl << endl;

	cout << "The Fourth C-String is Reversed from the First --> ";

	aBcDArray(charAbcDArray, ARRAY_SIZE);// Calling the Upper Fucntions.

	cout << endl << endl;
	
	system("pause");
	return;
}

void ABCDArray(char ABCDarr[], int size)//Upper Function.
{
	char *ptrABCD; //Does not need to be null pointed as it is terminated that way.
	const int ARRAY_SIZEA = size; //Set up the array size variable.
	ptrABCD = new char[strlen(ABCDarr) + 1];// Setting up the new array.
	char upper;

	strcpy(ptrABCD, ABCDarr); //Copy AbCd into my char array.
	
	for (int x = 0; x < size; x++)
	{
		upper = toupper(ptrABCD[x]);
		cout << upper;
	}

	//Free up the memory that the array was passed to.
	delete[] ptrABCD; // Delete the ptrABCD.
	
	//Validate that the memory has been cleared.
	
	return;
}


void abcdArray(char abcdarr[], int size)//Lower Function.
{
	char *ptrabcd; //Does not need to be null pointed as it is terminated that way.
	const int ARRAY_SIZEA = size; //Set up the array size variable.
	ptrabcd = new char[strlen(abcdarr) + 1];// Setting up the new array.
	char lower;

	strcpy(ptrabcd, abcdarr); //Copy AbCd into my char array.


	for (int x = 0; x < size; x++)
	{
		lower = tolower(ptrabcd[x]);
		cout << lower;
	}

	//Free up the memory that the array was passed to.
	delete[] ptrabcd; // Delete the ptrabcd.
	return; // Return back to the main function.
}

void aBcDArray(char abcdarr[], int size)//Reverse Function.
{
	char *ptraBcD; //Does not need to be null pointed as it is terminated that way.
	const int ARRAY_SIZEA = size; //Set up the array size variable.
	ptraBcD = new char[strlen(abcdarr) + 1];// Setting up the new array.
	char reverse;

	strcpy(ptraBcD, abcdarr); //Copy AbCd into my char array.


	for (int x = 0; x < size; x++)
	{
		if (islower(ptraBcD[x]))//Testing to see if the character is lower case.
		{
			reverse = toupper(ptraBcD[x]);
			cout << reverse;
		}
		else
		{
			reverse = tolower(ptraBcD[x]);
			cout << reverse;
		}
	}

	//Free up the memory that the array was passed to.
	delete[] ptraBcD; // Delete the ptrabcd.

	return;
}
