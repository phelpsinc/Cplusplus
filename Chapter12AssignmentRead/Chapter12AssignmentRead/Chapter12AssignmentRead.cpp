//============================================================
// Name: Chuck Phelps
// Created: 07/16/2017
// Updated: 07/16/2017
// Assignment: Chapter 12 Assignment Read 5 Records to a File.
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

	double totalRetail = 0; // This total will hold the total retail cost of all items.
	double totalWholeSale = 0; // This will hold the total whole sale cost of each item.
	int totalQuantityOnHand = 0; // This will hold the total quantity of items.

	hardwareStore inventHW; // Declare the variable to hold the hardwareStore structure information.
	char addMore; // Hold the Y or N to terminate the while loop.
	char pauseIfCheck;
	fstream hardwareReadOutPutFile; // Add an object to store the fstream data.

	//Open the file for reading an in binary.
	hardwareReadOutPutFile.open("c:\\cplusplus\\hdardwareOutPutFile.dat", ios::in | ios::binary);

	if (!hardwareReadOutPutFile)// Check to see if there are any issue reading the file.
	{
		cout << "Error opening the file. Please recheck to see if the file exists.";
		cout << endl << "Press enter to exit.";
		cin.get(pauseIfCheck);
		exit(1);// Exit the program.
	}

	
		//Read the file.
		hardwareReadOutPutFile.read(reinterpret_cast<char *>(&inventHW), sizeof(inventHW));

		while (!hardwareReadOutPutFile.eof())
		{
			cout << endl << endl; // Add some space for cleanlyness.
			//Display the records.
			cout << "Item Description: "; // Display the item description.
			cout << inventHW.itemDescription << endl; 
			cout << "Quantity On Hand: ";
			cout << inventHW.quantityOnHand << endl;
			cout << "Retail Cost: ";
			cout << inventHW.retailCost << endl;
			cout << "Wholesale Cost: ";
			cout << inventHW.wholeSale << endl;
			cout << "Date the item was added: ";
			cout << inventHW.dateAdded << endl;
		
			cout << endl << endl; // Add some space for cleanlyness.
			cout << "Press Enter for the next record. ";
			cin.get(addMore);

			totalRetail += inventHW.retailCost; // Total the retail cost coming from the file.
			totalWholeSale += inventHW.wholeSale; // Total the wholesale cost of each item.
			totalQuantityOnHand += inventHW.quantityOnHand; // Total the wholesale cost of each item.

			//Read the file.
			hardwareReadOutPutFile.read(reinterpret_cast<char *>(&inventHW), sizeof(inventHW));

		}

		cout << endl << endl;
		cout << "The total Retail cost of inventory is " << totalRetail << "."; //Display total retail value.
		cout << endl;
		cout << "The total Wholesale cost of inventory is " << totalWholeSale << ".";
		cout << endl;
		cout << "The total Invetory of all the items are " << totalQuantityOnHand << ".";

		cout << endl << endl;

		cout << "That is the end of the file. Press Enter to close the program." << endl;
		cin.get(pauseIfCheck);
		//Close the file out that is being read.
		hardwareReadOutPutFile.close();

		return;
		


} 

