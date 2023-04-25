/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1B
 * SECTION    : MW 7:30pm
 * Assign #2  : tic-tac-toe game (multi-dimensional arrays)
 * DUE DATE   : 19 September 2019
 ******************************************************************************/

#include "MyHeader.h"
#include "ClassHeader.h"





/******************************************************************************
 * 	FUNCTION PrintHeaderToConsole
 * 	---------------------------------------------------------------------------
 * 		This function receives an assignment name, type
 * 		and number then outputs the appropriate header to the console
 * 		==> returns nothing - This will output the class heading.
 * 	---------------------------------------------------------------------------
 * 	PRE-CONDITIONS
 * 		The following needs a defined value passed in
 * 			cout  : IN & OUT - output to the console
 * 			asName: Assignment name
 * 			asType: Assignment type
 * 			asNum : Assignment Number
 * 	POST-CONDITIONS
 * 		==> returns nothing - this function will output the class heading
 ******************************************************************************/


void PrintHeader(string  asName,  // IN - assignment Name - used for
										 //    - output
				 char 	 asType, // IN - assignment type
						  	  	  	     // - (LAB or ASSIGN) - used for
						  	  	  	  	 // - output
				 int	 asNum)  // IN - assign. number  - used for
										 //    - output)


{

	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : Julian Lasting & Ali Eshghi " << endl;
	cout << "*  "      << setw(14) << "STUDENT ID" << ": 1097778 & 1112261"
	     << endl;
	cout << "*  "      << setw(14) << "CLASS"  <<": CS1B - MW - 7:30 - 9:50p"
	     << endl;
	cout << "*  ";

	// PROCESSING - This will adjust setws and format appropriately
	//				based on if this is a lab 'L' or assignment
	if (toupper(asType) == 'L')
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}

	cout << asNum <<": " << asName << endl;
	cout << "**************************************************\n\n";
	cout << right;

}




void InitializeSheep(Animal animal, Sheep sheep)
{
	string 		sheepName;
	int			sheepAge;
	string		recordWool;
	string		recordColor;
	WoolType    woolType;

	int 		index;

	ifstream 	inFileSheep;


	inFileSheep.open("SheepFile.txt");



	index = 0;

	while(inFileSheep && index < AR_SIZE)
	{
		getline(inFileSheep,sheepName);
		sheep.GetName(sheepName);
		sheep.SetSheepName(sheepName);

		inFileSheep >> sheepAge;
		sheep.GetAge(sheepAge);
		sheep.SetSheepAge(sheepAge);

		getline(inFileSheep, recordWool);

		if(recordWool == "LONG")
		{
			woolType = LONG;
		}

		else if(recordWool == "MEDIUM")
		{
			woolType = MEDIUM;
		}

		else if(recordWool == "FINE")
		{
			woolType = FINE;
		}

		else if(recordWool == "CARPET")
		{
			woolType = CARPET;
		}

		sheep.SetWool(woolType);

		getline(inFileSheep,recordColor);
		sheep.SetWoolColor(recordColor);

		cin.ignore(10000,'\n');

		index++;
	}

	inFileSheep.close();
}




void InitializePig(Animal animal, Pig pig)
{
	string 		pigName;
	int			pigAge;
	string		recordTail;
	TailType 	tailType;

	int 		index;

	ifstream 	inFilePig;


	inFilePig.open("PigFile.txt");



	index = 0;


	while(inFilePig && index < AR_SIZE)
	{
		getline(inFilePig,pigName);
		pig.GetName(pigName);
		pig.SetPigName(pigName);

		inFilePig >> pigAge;
		pig.GetAge(pigAge);
		pig.SetPigAge(pigAge);

		getline(inFilePig, recordTail);

		if(recordTail == "STRAIGHT")
		{
			tailType = STRAIGHT;
		}

		else if(recordTail == "CORKSCREW")
		{
			tailType = CORKSCREW;
		}

		else if(recordTail == "CURL_UP")
		{
			tailType = CURL_UP;
		}

		else if(recordTail == "CURL_RIGHT")
		{
			tailType = CURL_RIGHT;
		}

		else if(recordTail == "CURL_LEFT")
		{
			tailType = CURL_LEFT;
		}

		pig.SetTail(tailType);

		cin.ignore(10000,'\n');

		index++;

	}


	inFilePig.close();
}



/*******************************************************************************
 * Menu
 * This function outputs the main menu and gets the user's choice for the menu
 * options
 *
 * RETURNS: ineger
 ******************************************************************************/

int MainMenu()
{
	/*************
	 * VARIABLES *
	 *************/

	int     menuOption; //IN - user input for menu
	bool	checkInp;   //PROCESS - input check

	/**************
	 * INITIALIZE *
	 **************/

	checkInp = false;


	//do while loop for error checking
	do
	{
		//INPUT

		cout << "1 - Re - Initializing Sheeps " << endl;
		cout << "2 - Re - Initializing Pigs"    << endl;
		cout << "3 - Change Age"			    << endl;
		cout << "4 - Display" 				    << endl;
		cout << "0 - Exit" 					    << endl;
		cout << "Enter Selection: ";


		//CHECKS FOR THE CHAR INPUT

		if (!(cin >> menuOption))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << endl;
			cout << "**** Please input a NUMBER between 0 and 4 ****";
			cout << endl << endl;

			checkInp = false;

		}

		//CHECKS FOR THE RANGE ERROR

		else if (menuOption >= 5 || menuOption <= -1 )
		{

			cout << endl;
			cout << "**** The number "              << menuOption
			<< " is an invalid entry     ****" << endl;
			cout << "**** Please input a number between 0 and 4 ****";
			cout << endl << endl;

			checkInp = false;

		}

		//PASS

		else
		{

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			checkInp = true;

		}

	}while(!checkInp);

	//returns an integer to the main
	return menuOption;
}
