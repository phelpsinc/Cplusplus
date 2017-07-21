// Chapter11and12Notes.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct room 
{
	char desc[16]; //Character Array.
	string wallcover;
	string floorcover;
	double dimensions[3];// 0 = length, 1 = width, 2 = height.
	short doors;

};


void main()
{
	room strex1;

	fstream inFile("c:\\cplusplus\\testout9.txt", ios::in | ios::binary);

	inFile.read(reinterpret_cast<char *>(&strex1), sizeof(strex1));

	while (!inFile.eof()) //Read the file until it does not hit the End of File Flag.
	{
		cout << strex1.desc << " " << strex1.dimensions[2] << " " << strex1.wallcover << " " << strex1.doors << endl;
		inFile.read(reinterpret_cast<char *>(&strex1), sizeof(strex1));
	}

	inFile.close();
	system("pause");
	return;
}
