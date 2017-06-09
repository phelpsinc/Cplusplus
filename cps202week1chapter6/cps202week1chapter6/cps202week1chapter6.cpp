// cps202week1chapter6.cpp : Defines the entry point for the console application.
//============================================================
// Name: Chuck Phelps
// Created: 06/08/2017
// Updated: 06/08/2017
// Purpose:
//=============================================================

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// Declaring the void function before the code.
int dispSomething(int, int = 10);

void main()
{
	int x = 29;
	int y = 34;
	double a = 23.7;
	double b = 45.9;

	cout << "answer " << dispSomething(x, y) << endl;
	cout << "answer " << dispSomething(x, y) << endl;
	cout << "answer " << dispSomething(x, y) << endl;
	cout << "answer " << dispSomething(x, y) << endl;
	cout << "answer " << dispSomething(x, y) << endl;

	
	system("pause");
	return;
}

int dispSomething(int numa, int numb)
{
	static int count = 0;
	count++;
	cout << "count " << count;
	cout << "int ver" <<endl;
	return numa + numb;
}


