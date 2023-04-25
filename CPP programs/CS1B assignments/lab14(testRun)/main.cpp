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

/*******************************************************************************
* Lab 14
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

	int 		startOption;  //IN - choice of the first menu
	int			menuOption;   //IN - choice of the main menu
	int			animalOption; //IN - choice of which animal
	int     	index; 		  // CALC - keeping track of the array lists


	bool		checkInp;     //PROCESS - input checking

	char		initSure;  //

	string 		sheepName; // IN & OUT - sheep's name
	string 		pigName;   // IN & OUT - pig's name
	string 		nameAr;    // OUT - list of animal names

	int 		sheepAge; // IN & OUT - sheep's age
	int 		pigAge;   // IN & OUT - pig's age
	int 		newAge;   // IN & OUT - new age of pig or sheep
	int 		ageAr;    // OUT - list of animal ages

	TailType 	tailType; // Pig's tail
	WoolType    woolType; // Sheep's wool

	Menu    	menuChoice; // IN - user input for the main menu

	Animal		animal; // Base class of type animal

	Sheep		sheep;  // Derived class of animal type sheep

	Sheep 		fluffy; // IN - Sheep class object that stores name, age, wool-type, and color
						// for Fluffy

	Sheep 		baa;     // IN - Sheep class object that stores name, age, wool-type, and color
						 // for Baa

	Sheep 		babe;  // IN - Sheep class object that stores name, age, wool-type, and color
	 	 	 	 	   // for Babe

	Pig			pig;    // Sub-derived class of animal type pig

	Pig 		oink;   // IN - Pig class object that stores name, age, wool-type, and color
	 	 	 	 	 	// for Oink

	Pig 		piggy;   // IN - Pig class object that stores name, age, wool-type, and color
	 	 	 	 	 	 // for Piggy

	Pig 		charlotte;  // IN - Pig class object that stores name, age, wool-type, and color
	 	 	 	 	 	    // for Charlotte



	/*************
	 *  PROCESS  *
	 *************/
	//this function will print header to the screen

	PrintHeader("Inheritance, Overloading, Redefining", 'L', 14);




	//This function gets the user choice for the first menu to initialize or
	//exit the program
	startOption = FirstMenu();

	switch(startOption)
	{
	case 1: menuChoice = InitAnimal;
	break;
	case 0: menuChoice = Exit;
	break;
	}

	//if for the first choice that initializes the objects
	if(menuChoice == InitAnimal)
	{
		/************************
		 * INITIALIZING OBJECTS *
		 ************************/

		//the function uses the methods to initialize the animal array
		InitializeSheep(animal, sheep);
		InitializePig(animal, pig);

	}


	cout << endl << endl;

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


				cout << "Are you sure you want to reinitialize Sheeps (Y/N)? ";
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
				cout << "Sheeps have not been re-initialized!" << endl <<endl;
			}
		}


		//if statement for the second option of the menu
		else if(menuChoice == InitPig)
		{
			checkInp = false;

			do
			{
				//INPUT - asks user if they are sure for reinitialization


				cout << "Are you sure you want to reinitialize Pigs (Y/N)? ";
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
				cout << "Pigs have not been re-initialized!" << endl <<endl;
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
				cout << "1 - Fluffy" << endl;
				cout << "2 - Baa "    << endl;
				cout << "3 - Babe "    << endl;
				cout << "Which Sheep would you like change: ";
				cin  >> animalOption;


				if(animalOption == 1)
				{

					cout << endl;

					fluffy.SetSheepAge(ageAr);

				}
				else if(animalOption == 2)
				{
					baa.SetSheepAge(ageAr);
				}
				else if(animalOption == 3)
				{
					babe.SetSheepAge(ageAr);
				}

			}


			//if statement to change the age for the pigs
			else if(animalOption == 2)
			{

				cout << "1 - Piggy"   		<< endl;
				cout << "2 - Charlotte "    << endl;
				cout << "3 - Oink "    		<< endl;
				cout << "Which Pig would you like to change: ";
				cin  >> animalOption;


				if(animalOption == 1)
				{
					piggy.SetPigAge(ageAr);
				}
				else if(animalOption == 2)
				{
					charlotte.SetPigAge(ageAr);
				}
				else if(animalOption == 3)
				{
					oink.SetPigAge(ageAr);
				}
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

/*
 *
			checkInp = false;


			//do while loop for user input for which animal they want to change
			do
			{
				//INPUT
				cout << "\nCHANGE AGE:" << endl;
				cout << "1 - Fluffy"    << endl;
				cout << "2 - Maa"       << endl;
				cout << "3 - Babe"      << endl;

				cout << "Select the animal you'd like to change: ";


				//CHECKS FOR THE CHAR INPUT

				if (!(cin >> animalOption))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					cout << endl;
					cout << "**** Please input a NUMBER between 1 and 3 ****";
					cout << endl << endl;

					checkInp = false;

				}

				//CHECKS FOR THE RANGE ERROR

				else if (animalOption >= 4 || animalOption <= 0 )
				{

					cout << endl;
					cout << "**** The number "              << animalOption
					<< " is an invalid entry     ****" << endl;
					cout << "**** Please input a number between 1 and 3 ****";
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


			//if statement if the user wants to change the age for Fluffy
			if(animalOption == 1)
			{

				age1 = ChangeAge();

				cout << "\nChanging Fluffy's age to " << age1 << "..." << endl
					 << endl;

				fluffy.SetAgeSheep1(age1);
			}

			//if statement if the user wants to change the age for Maa
			else if(animalOption == 2)
			{
				age2 = ChangeAge();

				cout << "\nChanging Maa's age to " << age2 << "..." << endl
					 << endl;

				maa.SetAgeSheep2(age2);
			}

			//if statement if the user wants to change the age for Babe
			else if(animalOption == 3)
			{
				ageP = ChangeAge();

				cout << "\nChanging Babe's age to " << ageP << "..." << endl
					 << endl;

				babe.SetAgePig(ageP);
			}
 * */

