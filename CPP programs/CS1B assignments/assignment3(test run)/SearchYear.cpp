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
 * Function - SearchYear
 * ---------------------------------------------------------------------------
 * This function will get a year from the user and search the year content of
 * each node to see if there is a matching year in the nodes with the year
 * searched by the user. if found, the function prints out every content of
 * every node for the user, if not found, the function outputs that the year
 * searched by the user was not found.
 *
 * return type - nothing
 * 				 the function is void type
 ******************************************************************************/

void SearchYear(MovieNode *head, ofstream &outFile)
{
	/*************
	 * VARIABLES *
	 ************/

	MovieNode *movPtr;	//Proc - stores the target name
	MovieNode node;			//Proc & In - passes the info into persPtr


	int i;					//Int - counts the founded data

	int checkInt;			//In - stores input value

	bool checkInp;          //Proc - LCV value

	/****************
	 * INITIALIZING *
	 ****************/
	checkInp = false;

	i = 1;

	/**************************************************************************
	 * PROCESSING - searching for the year in the list one by one and output
	 * 				each movie with the matching year to the output file
	 **************************************************************************/


	if (head == NULL)
	{
		cout << endl;

		cout << "Can not search for a year in an empty list.";

		cout << endl;
	}

	else
	{
		//creating new node

		movPtr = new MovieNode;

		//INPUT

		cout << endl;

		do
		{
			//INPUT

			cout << "\nWhich year are you looking for? ";

			//CHECKS FOR THE CHAR INPUT

			if (!(cin >> checkInt))
			{

				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				cout << endl;
				cout << "**** Please input a NUMBER between 1878 and 3000 ****";
				cout << endl;
				checkInp = false;


			}

			//CHECKS FOR THE RANGE ERROR



			else if (checkInt >= 3001 || checkInt <= 1877 )
			{

				cout << endl;
				cout << "**** The number "              << checkInt
					 << " is an invalid entry     ****" << endl;
				cout << "**** Please input a number between 1878 and 3000 ****";
				cout << endl;

				checkInp = false;

			}

			//PASS

			else
			{

				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				checkInp = true;

			}

		}while(!checkInp);

		node.year = checkInt;

		*movPtr = node;

		cout << endl;

		cout << "Searching for the year " << movPtr -> year;

		cout << endl;

		outFile << "\nSearch by actor for " << movPtr -> year << " found:";

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
			if (head -> year == movPtr -> year)
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


		if (head -> next == NULL && (head -> year    == movPtr -> year))
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
			cout << endl;

			cout << "Sorry, no movies for the year, " << movPtr -> year
			 	 << " were found.";

			cout << endl;
		}

		//OUTPUT RESULT INTO THE CONSOLE

		if(i > 1)
		{
			cout << "Found " << i-1 << " movies for the year "
				 << movPtr -> year << '!' << endl;
		}

		movPtr = NULL;
		delete movPtr;

	 }

}
