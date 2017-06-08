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
void dispSomething(int);

void main()
{
	int age = 29;
	dispSomething(age);
	
	system("pause");
	return;
}

void dispSomething(int numa)
{
	cout << numa <<endl;
	return;
}

