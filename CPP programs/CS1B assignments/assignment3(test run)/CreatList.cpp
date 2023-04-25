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
 * Function - CreatList
 * ---------------------------------------------------------------------------
 * This function will get the data from the input file and puts the data into
 * the contents of the nodes, then add the nodes to the empty lists passed by
 * Reference to the function
 *
 * return type - nothing
 * 				 the function is void type
 ******************************************************************************/

void CreatList(MovieNode *&head)
{
	/*************
	 * VARIABLES *
	 ************/

	fstream     inFile;

	//OPEN FILE

	inFile.open("inFile.txt");

	MovieNode *moviePtr;	    //In & Calc  - node to input data
	MovieNode *searchPtr;		//Calc       - node to go through the loop
	MovieNode  node;			//In         - node to set the input into main
								//				main linked list

	bool found;					//Proc - lcv  varibale

	/****************
	 * INITIALIZING *
	 ****************/

	moviePtr = head;

	/**************************************************************************
	 * INPUT - Gets the data from the input file and puts them into the content
	 * 		   of the nodes in the linked list
	 **************************************************************************/

	while (inFile)
	{
		//FIRST INPUT

		getline(inFile,node.title);
		getline(inFile,node.leadActor);
		getline(inFile,node.supportActor);
		getline(inFile,node.genre);
		getline(inFile,node.altGenre);
		inFile >> node.year;
		inFile.ignore(10000,'\n');
		inFile >> node.rate;
		getline(inFile,node.synopsis);
		inFile.ignore(10000,'\n');
		inFile.ignore(10000,'\n');


		//CREATE A NEW NODE

		moviePtr    = new MovieNode;
		*moviePtr   = node;
		searchPtr   = head;

		found       = false;

		//IF EMPTY
		if (head == NULL)
		{

			moviePtr -> next = head;
			moviePtr -> prev = NULL;

			head             = moviePtr;

			moviePtr         = NULL;

		}

		//ADDING IN TO THE FRONT

		else if(head -> title > moviePtr -> title)
		{

			moviePtr -> prev  = NULL;
			moviePtr -> next  = head;

			head   -> prev    = moviePtr;
			head              = moviePtr;

			moviePtr          = NULL;

		}

		else
		{
			//COMPARING NODES TO SEE WHICH SHOULD GO WHERE

			while ((searchPtr -> next != NULL) && !found)
			{

				if (searchPtr -> next -> title > moviePtr -> title)
				{

					found = true;

				}

				else
				{

					searchPtr = searchPtr -> next;

				}
			}

			//TAIL

			if(searchPtr -> next == NULL)
			{

				moviePtr  -> next = NULL;
				moviePtr  -> prev = searchPtr;

				searchPtr -> next = moviePtr;

				moviePtr          = NULL;
			}

			//MIDDLE

			else
			{

				moviePtr -> next = searchPtr -> next;
				moviePtr -> prev = searchPtr;

				searchPtr -> next -> prev = moviePtr;
				searchPtr -> next = moviePtr;

				searchPtr = moviePtr = NULL;

			}

		} // END - ELSE

	} // END - WHILE

	//CLOSE FILE

	inFile.close();

}
