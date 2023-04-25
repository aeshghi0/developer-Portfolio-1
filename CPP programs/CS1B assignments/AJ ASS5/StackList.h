/************************************************************
* AUTHOR		 : Amirarsalan Valipour
* STUDENT ID 	 : 1103126
* Assignment #5	 : DVD Movie ListIntro to OOP
* CLASS		     : CS 1B
* SECTION	     : MW - 7:30 pm - 9:50 pm
* DUE DATE	     : 12/16/2019
*************************************************************/

#ifndef STACKLIST_H_
#define STACKLIST_H_

#include "MyHeader.h"

class StackList		// Base Class -Using linked list implementation
{

	public:

		/********************************
		 *   CONSTRUCTOR / DESTRUCTOR   *
		 ********************************/

		StackList();

		~StackList();


		/******************
		 *    MUTATORS    *
		 ******************/

		void Push(DVDNode newDVD); //create a DVDNode, add a
                                   // DVDNode in the stack, by
                                   // adding to the front of the
                                   // linked List

		DVDNode Pop(); 			   // return the DVDNode in the top of
								   // the stack, remove the DVDNode
								   // from the stack, delete the DVDNode

		/*******************
		 *    ACCESSORS    *
		 *******************/

		bool IsEmpty() const;		// check if stack is empty


		DVDNode Peek() const;		// return the DVDNode at the top
									// of the stack

		int Size() const;			// return the number of people
									// in the stack

	protected:

		DVDNode *head;		// head pointer for stack

		int stackCount;		// total number of persons in the stack
};

#endif /* STACKLIST_H_ */


/******************************
 *  CONSTRUCTOR & DESTRUCTOR  *
 ******************************/

/****************************************************************
 * StackList ();
 * Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ****************************************************************/

/****************************************************************
 * ~StackList ();
 * Destructor; does not perform any specific function
 * Parameters: none
 * Return:     none
 ****************************************************************/


/************
 * MUTATORS *
 ************/

/*******************************************************************
 * void Push (DVDNode newDVD);
 *
 * Mutator; This method will add a DVD node to the list to the front
 * -----------------------------------------------------------------
 * Parameter: newDVD (DVDNode) //IN - node to be added to list
 * -----------------------------------------------------------------
 * Return: none
 *******************************************************************/

/*******************************************************************
 * DVDNode Pop ();
 *
 * Mutator; This method will remove a DVD node from the front of the
 * list and return the DVDNode being removed
 * ------------------------------------------------------------------
 *  Parameter: none
 * ------------------------------------------------------------------
 * Return: dvdPtr (DVDNode)
 ********************************************************************/


/*************
 * ACCESSORS *
 *************/

/****************************************************************
 * bool IsEmpty () const;
 *
 * Accessor; This method will return the boolean value whether
 * the list is empty or not empty
 * --------------------------------------------------------------
 * Parameters: none
 * --------------------------------------------------------------
 * Return: emptyCheck (bool)
 ****************************************************************/

/****************************************************************
 * DVDNode Peek () const;
 *
 * Accessor; This method will return the DVD node of the first
 * element on the list
 * --------------------------------------------------------------
 * Parameters: none
 * --------------------------------------------------------------
 * Return: dvdPtr (DVDNode)
 ****************************************************************/

/****************************************************************
* int Size () const;
*
* Accessor; This method will return the size of the list
* --------------------------------------------------------------
* Parameters: none
* --------------------------------------------------------------
* Return: stackCount (int)
*****************************************************************/
