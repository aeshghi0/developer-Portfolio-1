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
 * Function - SearchActor
 * ---------------------------------------------------------------------------
 * This function will get a actor's name from the user and search the actors'
 * content of each node to see if there is a matching actor's name in the nodes
 * with the actor's name searched by the user. if found, the function prints out
 * every content of every node for the user, if not found, the function outputs
 * that the actor's name searched by the user was not found.
 *
 * return type - nothing
 * 				 the function is void type
 ******************************************************************************/

void SearchActor(MovieNode *head, ofstream &outFile)
{
	/*************
	 * VARIABLES *
	 ************/

	MovieNode *movPtr;	//Proc - stores the target name
	MovieNode node;			//Proc & In - passes the info into persPtr


	int i;					//Int - counts the founded data

	/****************
	 * INITIALIZING *
	 ****************/

	i = 1;

	/**************************************************************************
	 * PROCESSING - searching for the actor in the list one by one
	 **************************************************************************/


	//if statement for empty list
	if (head == NULL)
	{
		cout << endl;

		cout << "Can not search for an actor in an empty list.";

		cout << endl;
	}

	else
	{
		//creating new node

		movPtr = new MovieNode;

		//INPUT

		cout << endl;

		cout << "Which actor are you looking for? ";

		getline(cin, node.leadActor);

		*movPtr = node;

		cout << endl;

		cout << "Searching for the actor " << movPtr -> leadActor;

		cout << endl;

		outFile << "\nSearch by actor for " << movPtr -> leadActor
				<< " found:";

		outFile << endl << endl;

		outFile << left;

		outFile << setw(9)  << "MOVIE #"           ;
		outFile << setw(49) << "TITLE"             ;
		outFile << setw(6)  << "YEAR"              ;
		outFile << setw(9)  << "RATING"            ;
		outFile << setw(19) << "GENRE"             ;
		outFile << setw(19) << "ALT GENRE"         ;
		outFile << setw(20) << "LEAD ACTOR"        ;
		outFile << setw(20) << "SUPPORTING ACTOR"  ;

		outFile << left;

		outFile << endl;

		outFile << "------- ";
		outFile << "------------------------------------------------ ";
		outFile << "---- ";
		outFile << "------ ";
		outFile << "----------------- ";
		outFile << "----------------- ";
		outFile << "------------------- ";
		outFile << "------------------- ";
		outFile << endl;

		//GOES THROUGH THE LIST

		while(head->next != NULL)
		{
			if ((head -> leadActor    == movPtr -> leadActor) ||
				(head -> supportActor == movPtr -> leadActor))
			{

				outFile << right;
				outFile << setw(4)  << i << "      "       ;
				outFile << left;
				outFile << setw(49) << head -> title       ;
				outFile << setw(9)  << head -> year        ;
				outFile << setw(9)  << head -> rate        ;
				outFile << setw(19) << head -> genre       ;
				outFile << setw(19) << head -> altGenre    ;
				outFile << setw(20) << head -> leadActor   ;
				outFile << setw(20) << head -> supportActor;
				outFile << endl;
				outFile << left;

				i++;
				head = head -> next;

			}

			else
			{
				head  = head -> next;
			}

		} // END - WHILE


		if ((head -> next == NULL &&
			(head -> leadActor    == movPtr -> leadActor)) ||
			(head -> next == NULL &&
			(head -> supportActor == movPtr -> leadActor)))
		{

			outFile << right;
			outFile << setw(4)  << i << "      "       ;
			outFile << left;
			outFile << setw(47) << head -> title       ;
			outFile << setw(8)  << head -> year        ;
			outFile << setw(5)  << head -> rate        ;
			outFile << setw(18) << head -> genre       ;
			outFile << setw(18) << head -> altGenre    ;
			outFile << setw(20) << head -> leadActor   ;
			outFile << setw(20) << head -> supportActor;
			outFile << endl;
			outFile << left;
			i++;
			head = head -> next;

		}

		//If couldn't found the name in the list
		if (i == 1)
		{
			cout << "Sorry, no movies for the actor, " << movPtr -> genre
			 	 << " were found.";

			cout << endl;
		}

		//Output the results in the output file
		if(i > 1)
		{
			cout << "Found " << i-1 << " movies for the actor "
				 << movPtr -> genre << '!' << endl;
		}

		movPtr = NULL;
		delete movPtr;

	 }

}