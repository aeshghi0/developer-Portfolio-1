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

/*******************************************************************************
* Lab 12
* ------------------------------------------------------------------------------
* This program uses the class and initializes the objects of the class using
* methods. then based on the user's choice the objects' values can be changed
* or get reinitialized to the first values.
* ------------------------------------------------------------------------------
* INPUT  : firstMenuOption -> The first choice that initializes the objects
* 							  or exits the program
* 		   menuChoice      -> choice of the user to change the age or value,
* 		   					  reinitialize, or display the data
* 		   newAge          -> change the value of the object age of the class
* 		   newValue        -> change the value of the object value of the class
* ------------------------------------------------------------------------------
* PROCESS: Initializing objects
* 		   Getting the first choice for the first menu
* 		   Getting the choice for the main menu
* 		   changing the age
* 		   changing the value
* ------------------------------------------------------------------------------
* OUTPUT : the values of the object variables of the class
*******************************************************************************/
int main()
{
	/***************************************************************************
	* CONSTANTS
	* --------------------------------------------------------------------------
	* OUTPUT - USED FOR CLASS HEADING
	* --------------------------------------------------------------------------
	* PROGRAMMER  : Programmer's Name
	* CLASS	   	  : Student's Course
	* SECTION	  : Class Days and Time
	* LAB_NUM	  : Lab Number (specific to this lab)
	* LAB_NAME    : Title of the Assignment
	***************************************************************************/
	const string PROGRAMMER	= "Ali Eshghi and Amirarsalan Valipour";
	const string CLASS		= "CS1B";
	const string SECTION	= "MW: 7:30p - 9:50p";
	const int    LAB_NUM	= 12;
	const string LAB_NAME   = "Intro to OOP";

	/*************
	 * VARIABLES *
	 *************/

	Menu 		startOption;  //IN - choice of the first menu
	int			menuOption;   //IN - choice of the main menu
	int			animalOption; //IN - choice of which animal


	bool		checkInp;     //PROCESS - input checking

	char		initSure;

	string 		sheepName;
	string 		pigName;

	Menu    	menuChoice;

	Animal		animal;
	Sheep		sheep;
	Pig			pig;



	/*************
	 *  PROCESS  *
	 *************/
	//this function will print header to the screen
	PrintHeader();




	//This function gets the user choice for the first menu to initialize or
	//exit the program
	startOption = FirstMenu();

	switch(startOption)
	{
	case InitAnimal: menuChoice = InitAnimal;
					 InitializeSheep(animal, sheep);
					 InitializePig(animal, pig);

	break;
	case Exit: menuChoice = Exit;
	break;
	}

	//while loop for the main menu untill the choice 0 is entered
	while(menuChoice != Exit)
	{
		//this function will get the user's choice for the main menu
		menuOption = MainMenu();

		switch(menuOption)
		{
		case 1: menuChoice = InitSheep;
		break;

		case 2: menuChoice = InitPig;
		break;

		case 3: menuChoice = ChangeAge;
		break;

		case 4: menuChoice = Display;
		break;

		default: menuChoice = Exit;
		}

		//if statement for the first option
		if(menuChoice == InitSheep)
		{
			checkInp = false;

			do
			{
				//INPUT - asks user if they are sure for reinitialization


				cout << "Are you sure you want to reinitialize Sheeps (Y/N)?";
				cin.get(initSure);


				//CHECKS FOR THE CHAR INPUT

				if (toupper(initSure) != 'Y' && toupper(initSure) != 'N')
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					cout << endl;
					cout << "**** "<< initSure
						 << " is an invalid entry     ****" << endl;
					cout << "**** Please input Y or N ****";
					cout << endl << endl;

					checkInp = false;


				}

				else
				{

					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					checkInp = true;

				}

			}while(!checkInp);

			//if statement for reinitializing the classes to the first values
			if(toupper(initSure) == 'Y')
			{
				cout << "\nInitializing the Sheeps..." << endl
					 << endl;



				//the function uses the methods to initialize the animal array
				InitializeSheep(animal, sheep);



			}

			else if(toupper(initSure) == 'N')
			{
				cout << "Sheeps have not beenre-initialized!" << endl <<endl;
			}
		}


		//if statement for the second option of the menu
		else if(menuChoice == InitPig)
		{
			checkInp = false;

			do
			{
				//INPUT - asks user if they are sure for reinitialization


				cout << "Are you sure you want to reinitialize Pigs (Y/N)?";
				cin.get(initSure);


				//CHECKS FOR THE CHAR INPUT

				if (toupper(initSure) != 'Y' && toupper(initSure) != 'N')
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					cout << endl;
					cout << "**** "<< initSure
						 << " is an invalid entry     ****" << endl;
					cout << "**** Please input Y or N ****";
					cout << endl << endl;

					checkInp = false;


				}

				else
				{

					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					checkInp = true;

				}

			}while(!checkInp);

			//if statement for reinitializing the classes to the first values
			if(toupper(initSure) == 'Y')
			{
				cout << "\nInitializing the Pigs..." << endl
					 << endl;

				//the function uses the methods to initialize the animal array
				InitializePig(animal, pig);



			}

			else if(toupper(initSure) == 'N')
			{
				cout << "Pigs have not beenre-initialized!" << endl <<endl;
			}



		}


		//if statement for the third option of the main menu
		else if(menuChoice == ChangeAge)
		{
			checkInp = false;

			cout << "\nCHANGE AGE:" << endl;

			//do while loop for user input for which animal type the user wants
			//to change
			do
			{
				//INPUT

				cout << "Which type of animal do you have in mind" << endl;

				cout << "1 - Sheep" << endl;
				cout << "2 - Pig"    << endl;

				cout << "Select the animal type: ";


				//CHECKS FOR THE CHAR INPUT

				if (!(cin >> animalOption))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					cout << endl;
					cout << "**** Please input a NUMBER between 1 and 2 ****";
					cout << endl << endl;

					checkInp = false;

				}

				//CHECKS FOR THE RANGE ERROR

				else if (animalOption >= 3 || animalOption <= 0 )
				{

					cout << endl;
					cout << "**** The number "              << animalOption
					<< " is an invalid entry     ****" << endl;
					cout << "**** Please input a number between 1 and 2 ****";
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


			//if statement to change the age for sheeps
			if(animalOption == 1)
			{

				//Display Sheep
				cout << endl;
				sheep.DisplayHeaderSheep();
				sheep.DisplaySheep();

				cout << "\n Which Sheep would you like change: " << endl;
				getline(cin,sheepName);

				sheep.ChangeSheepAge(sheepName);



			}


			//if statement to change the age for the pigs
			else if(animalOption == 2)
			{

				//Display Pig
				cout << endl;
				pig.DisplayHeaderPig();
				pig.DisplayPig();

				cout << "\nWhich Pig would you like to changeP: " << endl;
				getline(cin,pigName);

				pig.ChangePigAge(pigName);

			}







			//if statement if the user wants to change value for Babe
			else if(menuChoice == Display)
			{

				//these methods outputs the objects of the classes
				cout << endl;
				sheep.DisplayHeaderSheep();
				sheep.DisplaySheep();

				cout << endl;
				pig.DisplayHeaderPig();
				pig.DisplayPig();


				cout << endl << endl;
			}
		}


		//Display

	}


	return 0;
}

