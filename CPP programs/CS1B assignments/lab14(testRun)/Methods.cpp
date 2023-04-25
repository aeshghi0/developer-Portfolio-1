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
 * METHODS FOR CLASS ANIMAL
 ******************************************************************************/

Animal::Animal()		/*** CONSTRUCTOR ***/
{
	animalCount = 0;
}

Animal::~Animal() {}    /***  DESTRUCTOR ***/

//method to retrieve the name from the file
void Animal::GetName(string name)			/***  MUTATORS ***/
{
	//verify wether the array is not full
	if(animalCount < AR_SIZE)
	{
		//set the data in the array
		nameAr[animalCount] = name;

		//update the animal counter with one more class
		animalCount++;
	}

	else
	{
		cout << "Could not add animal - array is full" << endl;
	}
}

//method to retrieve the age of the animal from the file
void Animal::GetAge(int age)			/***  MUTATORS ***/
{
	//verify wether the array is not full
	if(animalCount < AR_SIZE)
	{
		//set the data in the array
		ageAr[animalCount] = age;
	}

	else
	{
		cout << "Could not add animal - array is full" << endl;
	}
}

void Animal::Display() const
{

}

/*******************************************************************************
 * METHODS FOR CLASS Sheep
 ******************************************************************************/

Sheep::Sheep()
{
	sheepCount = 0;
}

Sheep::~Sheep() {}

//method to retrieve the name from the file
void Sheep::SetSheepName(string name)			/***  MUTATORS ***/
{
	//verify wether the array is not full
	if(sheepCount < AR_SIZE)
	{
		//set the data in the array
		nameAr[sheepCount] = name;

		//update the animal counter with one more class
		sheepCount++;
	}

	else
	{
		cout << "Could not add animal - array is full" << endl;
	}
}

//method to retrieve the age of the animal from the file
void Sheep::SetSheepAge(int age)			/***  MUTATORS ***/
{
	//verify wether the array is not full
	if(sheepCount < AR_SIZE)
	{
		//set the data in the array
		ageAr[sheepCount] = age;
	}

	else
	{
		cout << "Could not add animal - array is full" << endl;
	}
}



void Sheep::SetWool(WoolType wool)
{
	switch(wool)
	{
	case LONG:   woolAr[sheepCount] = LONG;
			     sheepCount++;
	break;

	case MEDIUM: woolAr[sheepCount] = MEDIUM;
				 sheepCount++;
	break;

	case FINE:   woolAr[sheepCount] = FINE;
		   	     sheepCount++;
	break;

	case CARPET: woolAr[sheepCount] = CARPET;
		   	     sheepCount++;
	break;
	}
}

void Sheep::SetWoolColor(string color)
{
	colorAr[sheepCount] = color;
}

void Sheep::DisplayHeaderSheep() const
{
	cout << left;
	cout << "THE SHEEP:" << endl << endl;
	cout << setw(15) << "NAME" << setw(7)
		 << "AGE" << setw(9) << "WOOLTYPE" << setw(5) << "COLOR"
		 <<endl;

	cout << "--------------- " << "------- " << "--------- "
		 << "-----" << endl;

}

void Sheep::DisplaySheep() const
{
	int i;

	for(i = 0; i < AR_SIZE; i++)
	{
		cout << left;
		cout << setw(15) << nameAr[i] << setw(7) << ageAr[i] << setw(9) <<
				woolAr[i] << setw(5) << colorAr[i] << endl;
	}
}

void Sheep::ChangeSheepAge(string name)
{
	int i;
	int newAge;
	bool check;
	bool checkInp;

	check = false;
	i = 0;

	while(!check && i < AR_SIZE)
	{
		if(nameAr[i] == name)
		{
			check = true;
		}

		else
		{
			i++;
		}
	}

	if(check == true)
	{

		checkInp = false;

		do
		{
			//INPUT
			cout << "Enter the new Age: ";
			cin  >> newAge;

			cout << endl;

			//CHECKS FOR THE CHAR INPUT

			if (!(cin >> newAge))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				cout << endl;
				cout << "**** Please input a NUMBER between 0 and 10 ****";
				cout << endl << endl;

				checkInp = false;

			}

			//CHECKS FOR THE RANGE ERROR

			else if (newAge >= 11 || newAge <= -1 )
			{

				cout << endl;
				cout << "**** The number "              << newAge
						<< " is an invalid entry     ****" << endl;
				cout << "**** Please input a number between 0 and 10 ****";
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


		ageAr[i] = newAge;
		cout << "The Age for sheep " << nameAr[i] << " has been changed to "
				<< ageAr[i] << " !";

	}

	else
	{
		cout << "Could not find the sheep " << name << " to change the age"
			 << endl;
	}

}

/*
WoolType Sheep::GetWool() const;
{
	return wool;
}
*/

/*******************************************************************************
 * METHODS FOR CLASS Pig
 ******************************************************************************/

Pig::Pig()
{
	pigCount = 0;
}

Pig::~Pig() {}

//method to retrieve the name from the file
void Pig::SetPigName(string name)			/***  MUTATORS ***/
{
	//verify wether the array is not full
	if(pigCount < AR_SIZE)
	{
		//set the data in the array
		nameAr[pigCount] = name;

		//update the animal counter with one more class
		pigCount++;
	}

	else
	{
		cout << "Could not add animal - array is full" << endl;
	}
}

//method to retrieve the age of the animal from the file
void Pig::SetPigAge(int age)			/***  MUTATORS ***/
{
	//verify wether the array is not full
	if(pigCount < AR_SIZE)
	{
		//set the data in the array
		ageAr[pigCount] = age;
	}

	else
	{
		cout << "Could not add animal - array is full" << endl;
	}
}



void Pig::SetTail(TailType tail)
{
	switch(tail)
	{
	case STRAIGHT:   tailAr[pigCount] = STRAIGHT;
			     	 pigCount++;
	break;

	case CORKSCREW:  tailAr[pigCount] = CORKSCREW;
				 	 pigCount++;
	break;

	case CURL_UP:    tailAr[pigCount] = CURL_UP;
		   	     	 pigCount++;
	break;

	case CURL_RIGHT: tailAr[pigCount] = CURL_RIGHT;
		   	     	 pigCount++;
	break;

	case CURL_LEFT: tailAr[pigCount] = CURL_LEFT;
		   	     	 pigCount++;
	break;
	}
}

void Pig::DisplayHeaderPig() const
{

	cout << setw(15) << "NAME" << setw(7)
		 << "AGE" << setw(9) << "TAILTYPE"
		 << endl;

	cout << "--------------- " << "------- " << "--------- "
		 << "-----" << endl;

}

void Pig::DisplayPig() const
{
	int i;

	for(i = 0; i < AR_SIZE; i++)
	{
		cout << left;
		cout << setw(15) << nameAr[i] << setw(7) << ageAr[i] << setw(9) <<
				tailAr[i] << endl;
	}
}



void Pig::ChangePigAge(string name)
{
	int i;
	int newAge;
	bool check;
	bool checkInp;

	check = false;
	i = 0;

	while(!check && i < AR_SIZE)
	{
		if(nameAr[i] == name)
		{
			check = true;
		}

		else
		{
			i++;
		}
	}

	if(check == true)
	{
		do
		{
			//INPUT
			cout << "Enter the new Age: ";
			cin  >> newAge;


			//CHECKS FOR THE CHAR INPUT

			if (!(cin >> newAge))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				cout << endl;
				cout << "**** Please input a NUMBER between 0 and 10 ****";
				cout << endl << endl;

				checkInp = false;

			}

			//CHECKS FOR THE RANGE ERROR

			else if (newAge >= 11 || newAge <= -1 )
			{

				cout << endl;
				cout << "**** The number "              << newAge
				<< " is an invalid entry     ****" << endl;
				cout << "**** Please input a number between 0 and 10 ****";
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

		ageAr[i] = newAge;
		cout << "The Age for pig " << nameAr[i] << " has been changed to "
			 << ageAr[i] << " !";
	}

	else
	{
		cout << "Could not find the pig " << name << " to change the age"
			 << endl;
	}

}


/*
TailType Pig::GetTail() const;
{
	return tail;
}
*/
