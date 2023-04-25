/******************************************
* AUTHOR     : Ali Eshghi
* STUDENT ID : 1112261
* LAB #0.4   : Functions and Arrays
* CLASS      : CS1B
* SECTION    : MW: 7:30p
* DUE DATE   : 9/14/19
*******************************************/

#include "MyHeader.h"



float CalculatorAvg()
{
	int intAr[50];
	int index;
	int num;
	int total;
	int arSize;
	float avg;


	index = 0;
	total = 0;


	cout << "Enter an integer (-999 to stop): ";
	cin  >> num;


	while (num != -999)
	{

		intAr[index] = num;
		index++;


		cout << "Enter an integer (-999 to stop): ";
		cin  >> num;

	}

	arSize = index;


	for (index = 0; index < arSize; index++)
	{
		total += intAr[index];
	}


	avg = float(total)/index;

	return avg;

}
