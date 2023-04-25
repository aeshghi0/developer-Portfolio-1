#include "Header.h"

void readFromFile(string date_AR,
				  string userID_AR,
				  string itemSold_AR,
				  float  price_AR,
				  int    quantity_AR)
{
	ifstream inFile1;

	int i;

	inFile1.open("inFile1.txt");

	for(i = 0; i < AR_SIZE; i++)
	{
		getline(inFile1,date_AR[i]);
	}

	while(inFile1)
	{
		getline(inFile1, date_AR[i]);
		getline(inFile1, userID_AR[i]);
		getline(inFile1, itemSold_AR[i]);
		inFile1 >> price_AR[i];

		getline(inFile, node.genre);
		getline(inFile, node.altGenre);
		inFile >> node.year;
		inFile >> node.rating;
		inFile.ignore(10000,'\n');
		getline(inFile, node.synopsis);
		inFile.ignore(10000,'\n');

		StackList::Push(node);

	}

	inFile.close();
}

