/************************************************************
* AUTHOR		 : Amirarsalan Valipour
* STUDENT ID 	 : 1103126
* Assignment #5	 : DVD Movie ListIntro to OOP
* CLASS		     : CS 1B
* SECTION	     : MW - 7:30 pm - 9:50 pm
* DUE DATE	     : 12/16/2019
*************************************************************/

#ifndef MYHEADER_H_
#define MYHEADER_H_

// Preprocessor Directives

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <fstream>
#include <ios>

using namespace std;

// User Defined Types go here (more on this later)

struct DVDNode
{
	string title;				//store movie's title
	string leadingActor;		//store leading actor/actress
	string supportingActor;		//store supporting actor/actress
	string genre;				//store movie’s genre
	string alternateGenre;		// store movie’s alternate genre
	int year;					// store movie’s release year
	int rating;					// store movie’s rating
	string synopsis;			// store movie’s synopsis
	DVDNode *next;				// linked list next pointer
};

// Prototypes go here

/****************************************************************
 * PrintHeader
 *    This function receives receives an assignment name, type
 *     and number then outputs the appropriate header
 *     - returns  nothing -> This will output the class heading.
 ****************************************************************/

void PrintHeader(ostream &outFile,		//IN & OUT - OUTPUT FILE
				 string  asName,		//OUT - ASSIGNEMNT NAME
				 int     asNum, 		//OUT - ASSIGNEMNT NUMBER
				 char    asType);		//OUT - ASSIGNEMNT TYPE


/****************************************************************
 * StringAdj
 *    This function will setup the length for the movie plot.
 *     - returns  the new adjusted string
 ****************************************************************/

string StringAdj(string plot, int maxLength);

#endif /* MYHEADER_H_ */
