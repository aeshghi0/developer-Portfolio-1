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
 * Function - SearchGenre
 * ---------------------------------------------------------------------------
 * This function will get a genre from the user and search the genre content of
 * each node to see if there is a matching genre in the nodes with the genre
 * searched by the user. if found, the function prints out every content of
 * every node for the user, if not found, the function outputs that the genre
 * searched by the user was not found.
 *
 * return type - nothing
 * 				 the function is void type
 ******************************************************************************/

void SearchGenre(MovieNode *head, ofstream &outFile)
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
	 * PROCESSING - searching for the genre in the list one by one and output
	 * 				each movie with the matching genre to the output file
	 **************************************************************************/


	if (head == NULL)
	{
		cout << endl;

		cout << "Can not search for a genre in an empty list.";

		cout << endl;
	}

	else
	{
		//creating new node

		movPtr = new MovieNode;

		//INPUT

		cout << endl;

		cout << "Which genre are you looking for? ";

		getline(cin, node.genre);

		*movPtr = node;

		cout << endl;

		cout << "Searching for the genre " << movPtr -> genre;

		cout << endl;

		outFile << "\nSearch by genre for " << movPtr -> genre << " found:";

		outFile << endl << endl;

		outFile << left;

		outFile << setw(9)  << "MOVIE #"           ;
		outFile << setw(48) << "TITLE"             ;
		outFile << setw(5)  << "YEAR"              ;
		outFile << setw(8)  << "RATING"            ;
		outFile << setw(18) << "GENRE"             ;
		outFile << setw(18) << "ALT GENRE"         ;
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
			if ((head -> genre == movPtr -> genre) ||
				(head -> altGenre == movPtr -> genre))
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

			else
			{
				head  = head -> next;
			}

		} // END - WHILE


		if ((head -> next == NULL && (head -> genre == movPtr -> genre)) ||
			(head -> next == NULL && (head -> altGenre == movPtr -> genre)))
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

		//IF NOT FOUND IN THE LIST

		if (i == 1)
		{
			cout << "Sorry, no movies for the genre, " << movPtr -> genre
			 	 << " were found.";

			cout << endl;
		}

		//OUTPUT RESULT INTO THE CONSOLE

		if(i > 1)
		{
			cout << "Found " << i-1 << " movies for the genre "
				 << movPtr -> genre << '!' << endl;
		}

		movPtr = NULL;
		delete movPtr;

	}

}
