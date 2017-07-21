// Week3Notes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void dispIt(const int *, int); // Prevents us from changing values.

void main()
{
	
	int *ptrA = nullptr;
	ptrA = new int[3]; 

	*(ptrA + 0) = 29;
	*(ptrA + 1) = 32;
	*(ptrA + 2) = 67;

	for (int x = 0; x < 3; x++)
	{
		cout << *(ptrA + x) << endl;
	}

	delete [] ptrA;

	system("pause");
	return;
}

void dispIt(const int * ptrX, int occ) // Need the star because of the pointer. //Constant prevents changing the value.
{
	for (int x = 0; x < occ; x++)
	{
		cout << *(ptrX + x) << endl; //display the index/subscript of the array.

	}
	//*ptrX = 45;
}
