// Chapter15Notes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template <class Type>

Type larger(Type, Type);
/*double larger(double, double);
char larger(char, char);
string larger(string, string);*/

void main()
{
	int a = 46, b = 49;
	cout << larger(a, b) << endl;

	double d = 123.4, e = 321.5;
	cout << larger(d, e) << endl;

	char g = 'g', h = 'h';
	cout << larger(g, h) << endl;

	string j = "Abe", k = "George";
	cout << larger(j, k);

	cout << endl;

	system("pause");
    return;
}

template <class Type>
Type larger(Type x, Type y)
{
	
	if (x >= y)
		return x;
	else
		return y;
}

/*double larger(double x, double y)
{
	
	if (x >= y)
		return x;
	else
		return y;
}

char larger(char x, char y)
{

	if (x >= y)
		return x;
	else
		return y;
}

string larger(string x, string y)
{

	if (x >= y)
		return x;
	else
		return y;
}*/
