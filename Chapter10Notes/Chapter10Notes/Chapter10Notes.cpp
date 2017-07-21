// Chapter10Notes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void main()
{
	char var1 = '&';
	if (!isdigit(var1))
	{
		cout << "Moo" << endl;
	}

	cout << tolower(toupper('B')) << endl;

	system("pause");
    return;
}

