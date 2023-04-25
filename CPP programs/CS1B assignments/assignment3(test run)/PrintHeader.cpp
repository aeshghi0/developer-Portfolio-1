/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1B
 * SECTION    : MW 7:30pm
 * Assign #3  : Searching linked list
 * DUE DATE   : 6 November 2019
 ******************************************************************************/

#include "Header.h"

/*******************************************************************************
 * Function - PrintHeaderFile
 * ---------------------------------------------------------------------------
 * This function will output the class heading to the screen and output file
 *
 * return type - nothing
 * 				 the function is void type
 ******************************************************************************/
void PrintHeader(const string PROGRAMMER,
				 const string CLASS,
				 const string SECTION,
				 const int	  ASSIGN_NUM,
				 const string ASSIGN_NAME,
				 ofstream &outFile)
{


	//OUTPUT - Console

	cout << left;
	cout << "***************************************************\n"       ;
	cout << "*  PROGRAMMED BY : "    << PROGRAMMER  				     ;
	cout << "\n*  "		<< setw(14) << "CLASS"	   << ": " << CLASS      ;
	cout << "\n*  "		<< setw(14) << "SECTION"   << ": " << SECTION ;
	cout << "\n*  LAB #"	<< setw(9)  << ASSIGN_NUM  << ": " << ASSIGN_NAME;
	cout << "\n***************************************************\n\n"   ;
	cout << right;

	outFile << left;
	outFile << "***************************************************\n"       ;
	outFile << "*  PROGRAMMED BY : "    << PROGRAMMER  				     ;
	outFile << "\n*  "		<< setw(14) << "CLASS"	   << ": " << CLASS      ;
	outFile << "\n*  "		<< setw(14) << "SECTION"   << ": " << SECTION ;
	outFile << "\n*  LAB #"	<< setw(9)  << ASSIGN_NUM  << ": " << ASSIGN_NAME;
	outFile << "\n***************************************************\n\n"   ;
	outFile << right;

}

