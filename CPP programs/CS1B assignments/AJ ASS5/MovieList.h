/************************************************************
* AUTHOR		 : Amirarsalan Valipour
* STUDENT ID 	 : 1103126
* Assignment #5	 : DVD Movie ListIntro to OOP
* CLASS		     : CS 1B
* SECTION	     : MW - 7:30 pm - 9:50 pm
* DUE DATE	     : 12/16/2019
*************************************************************/

#ifndef MOVIELIST_H_
#define MOVIELIST_H_

#include "StackList.h"

class MovieList : public StackList
{
	public:

		/********************************
		 *   CONSTRUCTOR / DESTRUCTOR   *
		 ********************************/

		MovieList();

		~MovieList();


		/******************
		 *    MUTATORS    *
		 ******************/

		void CreateList (string inputFileName);



		/*******************
		 *    ACCESSORS    *
		 *******************/

		void OutputList (string outputFileName) const;


	private:

		string WordAdj (string plot) const;

		void PrintHeader(ostream &outFile, string  asName,
				  	  	 int     asNum,    char    asType) const;

		string StringAdj(string plot, int maxLength) const;
};

#endif /* MOVIELIST_H_ */



				/********************************
				 *   CONSTRUCTOR / DESTRUCTOR   *
				 ********************************/

/****************************************************************
* MovieList ();
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*****************************************************************/

/****************************************************************
 * ~MovieList ();
 * Destructor; does not perform any specific function
 * Parameters: none
 * Return: none
 ****************************************************************/


						/******************
						 *    MUTATORS    *
						 ******************/

/********************************************************************
 * void CreateList (string inputFileName);
 *
 * Mutator; This method will create a movie list using the input file
 * 			 data
 * ------------------------------------------------------------------
 * Parameter: inFileName (string)
 * ------------------------------------------------------------------
 * Return: none
 ********************************************************************/


						/*******************
						 *    ACCESSORS    *
						 *******************/

/*****************************************************************
 * void OutputList (string oFileName) const;
 *
 * Accessor; This method will output the list into the output file
 * ---------------------------------------------------------------
 * Parameters: oFileName (string)
 * ---------------------------------------------------------------
 * Return: none
 *****************************************************************/


/****************************************************************
* string WordAdj (string plot) const;
*
* Accessor; This method adjusts the string and the size of the words
* --------------------------------------------------------------
* Parameters: plot (string)
* --------------------------------------------------------------
* Return: returnStr (string)
*****************************************************************/


/**************************************************************
 * FUNCTION PrintHeader
 *_________________________________________________________
 * This function receives an assignment name, type
 *   and number then outFiles the appropriate header -
 *   returns nothing.
 *_________________________________________________________
 * PRE-CONDITIONS
 *
 * 		outFile: Ostream variable
 * 		asName : Assignment Name has to be previously defined
 * 		asType : Assignment Type has to be previously defined
 * 		asNum  : Assignment Number has to be previously defined
 *
 * POST-CONDITIONS
 *
 *      This function will output the class heading.
 **************************************************************/


/******************************************************************************
 * FUNCTION StringAdj
 * ----------------------------------------------------------------------------
 * This function will setup the length for the movie plot.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 * 		 string prompt : original string
 * 		 int maxLength : maximum length
 *
 * POST-CONDITIONS
 *
 * 		Returns new adjusted string to fit the length
 ******************************************************************************/
