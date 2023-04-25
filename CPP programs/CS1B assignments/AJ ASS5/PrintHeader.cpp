/************************************************************
* AUTHOR		 : Amirarsalan Valipour
* STUDENT ID 	 : 1103126
* Assignment #5	 : DVD Movie ListIntro to OOP
* CLASS		     : CS 1B
* SECTION	     : MW - 7:30 pm - 9:50 pm
* DUE DATE	     : 12/16/2019
*************************************************************/

#include "MyHeader.h"

/**************************************************************
 *
 * FUNCTION PrintHeader
 *_________________________________________________________
 * This function receives an assignment name, type
 *   and number then outFiles the appropriate header -
 *   returns nothing.
 *_________________________________________________________
 * PRE-CONDITIONS
 * 		outFile: Ostream variable
 * 		asName : Assignment Name has to be previously defined
 * 		asType : Assignment Type has to be previously defined
 * 		asNum  : Assignment Number has to be previously defined
 *
 * POST-CONDITIONS
 *      This function will output the class heading.
 **************************************************************/

void PrintHeader(ostream &outFile,		//IN & OUT - OUTPUT FILE
				 string  asName,		//OUT - ASSIGNEMNT NAME
				 int     asNum, 		//OUT - ASSIGNEMNT NUMBER
				 char    asType)		//OUT - ASSIGNEMNT TYPE
{
	const int  PROMPT = 14;

	const char PROGRAMMER[25] = "Amirarsalan Valipour";
	const char CLASS[5]		  = "CS1B";
	const char SECTION[25]	  = "MW: 7:30p - 9:50p";

	outFile << left;
	outFile << endl;
	outFile << "********************************************************";
	outFile << "\n* PROGRAMMED BY : " << PROGRAMMER;
	outFile << "\n* " << setw(PROMPT) << "CLASS"   << ": " << CLASS;
	outFile << "\n* " << setw(PROMPT) << "SECTION" << ": " << SECTION;
	outFile << "\n* ";

	if (toupper(asType) == 'L')
	{
		outFile << "LAB #" << setw(8);
	}

	else
	{
		outFile << "ASSIGNMENT #" << setw(1);
	}

	outFile << asNum << " : " << asName;
	outFile << "\n******************************************************";
	outFile << "**\n\n";
	outFile << right;

}
