//============================================================
// Name: Chuck Phelps
// Created: 07/12/2017
// Updated: 07/17/2017
// Assignment: Chapter 12 Assignment Write 5 Records to a File.
//=============================================================

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//Defining the character array sizes.
const int DESC_SIZE = 51, DATE_SIZE = 11;

struct hardwareStore // Hold the variables for the hardwareStore structure.
{
	char itemDescription[DESC_SIZE];
	int quantityOnHand;
	double wholeSale;
	double retailCost;
	char dateAdded[DATE_SIZE];
};

void main() {

	hardwareStore inventHW; // Declare the variable to hold the hardwareStore structure information.
	char addMore; // Hold the Y or N to terminate the while loop.
	
	
	//Open the file for writing and added append to the file.
	fstream hardwareOutPutFile("c:\\cplusplus\\hdardwareOutPutFile.dat", ios::out | ios::app | ios::binary);

	do
	{
		cout << endl << endl; // Add some space for cleanlyness.
		cout << "Enter the Item Description: "; // Enter the item description.
		cin.getline(inventHW.itemDescription, DESC_SIZE); //cin.getline was used to be able to ignore new lines.
		cout << "Enter the number of the items on hand: ";
		cin >> inventHW.quantityOnHand;
		cout << "Enter the Retail cost of the item: ";
		cin >> inventHW.retailCost;
		cout << "Enter the Whole Sale cost of the item: ";
		cin >> inventHW.wholeSale;
		cin.ignore(); // Do not automatically skip over the next line that needs to enter a string.
		//Need to have that returns ignored prior to capturing the line.
		cout << "Enter the Date the item was added: ";
		cin.getline(inventHW.dateAdded, DATE_SIZE);

		//Write to the file.
		hardwareOutPutFile.write(reinterpret_cast<char *>(&inventHW), sizeof(inventHW));

		//Should we enter the data again?
		cout << endl << endl; // Add some space for cleanlyness.
		cout << "Do you want to enter another record? ";
		cin >> addMore;
		cin.ignore();

	} while (addMore == 'Y' || addMore == 'y');
	{
		cout << endl << endl;// The Y or y was added after the screenshots were taken.
		cout << "Thank you for entering the information into the system.(Y or y) or Any other Key to cancel." << endl;
		system("pause");
		//Close the file.
		hardwareOutPutFile.close();
	}
}