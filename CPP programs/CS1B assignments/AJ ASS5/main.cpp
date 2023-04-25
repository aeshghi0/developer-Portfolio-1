/************************************************************
* AUTHOR		 : Amirarsalan Valipour
* STUDENT ID 	 : 1103126
* Assignment #5	 : DVD Movie ListIntro to OOP
* CLASS		     : CS 1B
* SECTION	     : MW - 7:30 pm - 9:50 pm
* DUE DATE	     : 12/16/2019
*************************************************************/

#include "MyHeader.h"
#include "MovieList.h"
#include "StackList.h"

/************************************************************
 * DVD Movie ListIntro to OOP
 *_________________________________________________________
 * This program outputs the movie list same as the previous
 *  assignment by using class and linked lists.
 *_________________________________________________________
 * INPUT:
 *   inputName:  NAME FOR INPUT FILE
 *   outputName: NAME FOR OUTPUT FILE
 *
 * OUTPUT:
 *   movieList: MOVIE LINKED LIST
 ************************************************************/

int main()
{
	/********************************************************
	 * 						 VARIABLE
	 ********************************************************/

	string inputName;		//CALC & OUT - NAME FOR INPUT FILE
	string outputName;		//CALC & OUT - NAME FOR OUTPUT FILE

	MovieList movieList;	//CALC & OUT - MOVIE LINKED LIST


	/********************************************************
	 * 					  OUTPUT HEADING
	 ********************************************************/

	PrintHeader(cout, "DVD Movie ListIntro to OOP", 5, 'A');


	/********************************************************
	 * 						   INPUT
	 ********************************************************/

	//PROMPT

	cout << "Which input file would you like to use(d for default file)? ";

	getline(cin, inputName);

	cout << endl;

	cout << "Which output file would you like to use(d for default file)? ";

	getline(cin, outputName);


	/********************************************************
	 * 						PROCESSING
	 ********************************************************/

	movieList.CreateList(inputName);


	movieList.OutputList(outputName);

	return 0;
}
