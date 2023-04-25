/*******************************************************************************
 * PROGRAMMER : Ali Eshghi & Julian Lasting
 * STUDENT ID : 1112261 & 1097778
 * CLASS      : CS1B
 * SECTION    : MW 7:30pm
 * LAB 14	  : Farmer's Pete livestock(inheritence class)
 * DUE DATE   : 13 December 2019
 ******************************************************************************/

#include "MyHeader.h"
#include "ClassHeader.h"

void InitializeSheep(Animal &animal, Sheep &sheep)
{
	string 		sheepName;
	string		sheepAge;
	string		recordWool;
	string		recordColor;
	WoolType    woolType;

	int 		index;

	ifstream 	inFileSheep;


	inFileSheep.open("SheepFile.txt");

	sheep.~Sheep();

	index = 0;

	while(inFileSheep && index < AR_SIZE)
	{
		getline(inFileSheep,sheepName);

		getline(inFileSheep,sheepAge);

		//cin.ignore(1000,'\n');

		getline(inFileSheep, recordWool);

		getline(inFileSheep,recordColor);


		//cin.ignore(10000,'\n');

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



		sheep.GetName(sheepName);
		sheep.SetSheepName(sheepName);

		sheep.GetAge(sheepAge);
		sheep.SetSheepAge(sheepAge);

		sheep.SetWool(woolType);

		sheep.SetWoolColor(recordColor);

		sheep.DisplaySheep();


		index++;
	}

	inFileSheep.close();
}




void InitializePig(Animal &animal, Pig &pig)
{
	string 		pigName;
	string		pigAge;
	string		recordTail;
	TailType 	tailType;

	int 		index;

	ifstream 	inFilePig;


	inFilePig.open("PigFile.txt");



	index = 0;


	while(inFilePig && index < AR_SIZE)
	{
		getline(inFilePig,pigName);
		getline(inFilePig,pigAge);
		getline(inFilePig,recordTail);

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



		//cin.ignore(10000,'\n');

		pig.GetName(pigName);
		pig.SetPigName(pigName);
		pig.GetAge(pigAge);
		pig.SetPigAge(pigAge);
		pig.SetTail(tailType);
		pig.DisplayPig();

		index++;

	}


	inFilePig.close();
}


/*******************************************************************************
 * FirstMenu
 *    This function gets the user choice for the first menu that has been run
 *
 *    RETURNS: integer
 ******************************************************************************/

Menu FirstMenu()
{

	/*************
	 * VARIABLES *
	 *************/

	int 	startOption;
	bool	checkInp;
	Menu	option;

	/**************
	 * INITIALIZE *
	 **************/

	checkInp = false;

	//do while loop for error checking
	do
	{
		//INPUT

		cout << "1 - Initialize Animals " << endl;
		cout << "0 - Exit"   			  << endl;
		cout << "Enter Selection: ";


		//CHECKS FOR THE CHAR INPUT

		if (!(cin >> startOption))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << endl;
			cout << "**** Please input a NUMBER between 0 or 1 ****";
			cout << endl << endl;

			checkInp = false;

		}

		//CHECKS FOR THE RANGE ERROR

		else if (startOption > 1 || startOption < 0 )
		{

			cout << endl;
			cout << "**** The number "              << startOption
			<< " is an invalid entry     ****" << endl;
			cout << "**** Please input a number between 0 or 1 ****";
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

	if(startOption == 1)
	{
		option = InitAnimal;
	}

	else
	{
		option = Exit;
	}

	//returns an integer to the main
	return option;
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

		else if (menuOption > 4 || menuOption < 0 )
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

/************************************************************
 * PrintHeaderFile
 * This function will output the class heading to the screen.
 *
 * return type - nothing
 * 				 the function is void type
 ************************************************************/

void PrintHeader()
{
	cout << left;
	cout << "***************************************************\n"       ;
	cout << "*  PROGRAMMED BY : ALI ESHGHI" 		 				      ;
	cout << "\n*  "		<< setw(14) << "CLASS"	   << ": " << CLASS       ;
	cout << "\n*  "		<< setw(14) << "SECTION"   << ": " << SECTION     ;
	cout << "\n*  LAB #"	<< setw(9)  << NUM  << ": " << NAME           ;
	cout << "\n***************************************************\n\n"   ;
	cout << right;
}



