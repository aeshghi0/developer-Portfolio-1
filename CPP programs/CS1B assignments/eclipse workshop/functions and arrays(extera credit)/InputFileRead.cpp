/******************************************
* AUTHOR     : Ali Eshghi
* STUDENT ID : 1112261
* LAB #0.4   : Functions and Arrays
* CLASS      : CS1B
* SECTION    : MW: 7:30p
* DUE DATE   : 9/14/19
*******************************************/

#include "MyHeader.h"



void InputFileRead()
{

	const int SIZE = 100;
	ifstream iFile;

	int   intAr[SIZE];
	float floatAr[SIZE];

	int index;
	int sz;


	index = 0;


	iFile.open("inFile.txt");


	while (iFile && index <= SIZE)
	{
		iFile >> intAr[index];
		iFile >> floatAr[index];
		sz = index;
		index++;
	}



	for (index=0; index < sz; index++)
	{
		cout << intAr[index] << ", ";
	}



	for (index=0; index < sz; index++)
	{
		cout << floatAr[index] << ", ";
	}

	iFile.close();

}
