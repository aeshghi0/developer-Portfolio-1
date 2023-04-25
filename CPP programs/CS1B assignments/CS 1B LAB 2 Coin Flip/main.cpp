/******************************************************************************
 * PROGRAMMER : Amirarsalan Valipour & Elsa Micklin
 * STUDENT ID : 1103126 & Elsa Micklin
 * CLASS      : CS1B
 * SECTION    : MW 7:30pm
 * LAB #2     : Coin Flip
 * DUE DATE   : 29 August 2019
 *****************************************************************************/

#include "Header.h"

int main()
{
	/**************************************************************************
	* CONSTANTS
	* ------------------------------------------------------------------------
	* OUTPUT - USED FOR CLASS HEADING
	* ------------------------------------------------------------------------
	* PROGRAMMER  : Programmer's Name
	* CLASS	   : Student's Course
	* SECTION	   : Class Days and Time
	* LAB_NUM	   : Lab Number (specific to this lab)
	* LAB_NAME	   : Title of the Lab
	*************************************************************************/

	const char PROGRAMMER[]	= "Amirarsalan Valipour & Elsa Micklin";
	const char CLASS[]		= "CS1B";
	const char SECTION[]	= "MW: 7:30p - 9:50p";
	const int  LAB_NUM		= 2;
	const char LAB_NAME[]	= "Coin Flip";




	/*************
	 * VARIABLES *
	 *************/

	string name;
	char   gender;
	int    totFlips;
	int    heads;

	/**************************************************************************
	 * OUTPUT - Class Heading
	 *************************************************************************/

	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : "	<< PROGRAMMER  << endl;
	cout << "*  "		<< setw(14) << "CLASS"	   << ": " << CLASS	    << endl;
	cout << "*  "		<< setw(14) << "SECTION"   << ": " << SECTION   << endl;
	cout << "*  LAB #"	<< setw(9)  << LAB_NUM   << ": "   << LAB_NAME	<< endl;
	cout << "***************************************************\n\n";
	cout << right;

	/******************
	 * INITIALIZATION *
	 ******************/

	totFlips = 0;
	heads = 0;

	/*************************************************************************
	 * INPUT - Prompt user for name and gender, read into variables.
	 *************************************************************************/

	void GetName(&name, &gender);



}



