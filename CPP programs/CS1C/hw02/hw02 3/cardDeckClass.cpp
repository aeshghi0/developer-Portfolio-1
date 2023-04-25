/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1C
 * SECTION    : MW 5pm
 * Assign #1  : Deck of cards
 * DUE DATE   : 22 January 2020
 ******************************************************************************/

#include"cardDeckClass.h"


/*******************************************************************************
 * Methods for class Deck
 *******************************************************************************/


/****************************************************************
 * Deck();
 * Constructor: initializes the count of the shuffles
 ****************************************************************/
Deck::Deck()
{

}


/****************************************************************
 * ~Deck();
 * Destructor: clears all the data from the class
 ****************************************************************/
Deck::~Deck() {}

/*******************************************************************
 * void Initialize();
 * This method will initialize a new deck of cards.
-----------------------------------------------------------------
 * Parameter:
-----------------------------------------------------------------
 * Return: none
*******************************************************************/
void Deck::Initialize(string deck[])
{
	//variables
	int i;	//PROCESS - LCV
	int j;	//PROCESS - LCV
	int z;	//PROCESS - LCV

	string face;	//PROCESS - temporary storage variable
	string suit;	//PROCESS - temporary storage variable
	string temp;	//PROCESS - temporary storage variable

	//all the face values in an string array
	string faces[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

	//put all the suit values in an array as strings
	string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

	z = 0;
	for(i = 0; i < 4; i++)
	{
		suit = suits[i];
		for(int j = 0; j < 13; j++)
		{
			face = faces[j];
			temp = face + " of " + suit;
			deck[z] = temp;
			z++;
		}
	}
}


/*******************************************************************
 * void Print() const;
 * This method will print deck of cards.
-----------------------------------------------------------------
 * Parameter:
-----------------------------------------------------------------
 * Return: none
*******************************************************************/
void Deck::print(string deck[]) const
{
	//variables 
	int i;	//PROCESS - LCV

	for(i = 0; i < DECK_SIZE; i++)
	{
		cout << deck[i] << endl;
	}

	cout << endl << endl;

}

/*******************************************************************
 * void shuffle();
 * This method will shuffle the deck of cards.
-----------------------------------------------------------------
 * Parameter:
-----------------------------------------------------------------
 * Return: none
*******************************************************************/
void Deck::shuffle(string deck[], string shuffleDeck[])
{
	//variables
	int i;	//PROCESS - LCV
	int j;	//PROCESS - LCV
	int z = 0;	//PROCESS - LCV
	
	string halfDeck1[26];	//PROCESS - saves half of the deck
	string halfDeck2[26];	//PROCESS - saves half of the deck

	cout << "<<<Shuffling the deck>>>" << endl;

	//initializing first half of deck
	for(j = 0; j < 26; j++)
	{
		halfDeck1[j] = deck[j];
	}

	//initializing socond half of deck
	for(i = 26; i < 52; i++)
	{
		halfDeck2[z] = deck[i];
		++z;
	}

	//shuffling
	i = 0;
	j = 0;
	z = 0;

	while(z < 52)
	{
		shuffleDeck[z] = halfDeck1[i];
		i++;
		z++;
		shuffleDeck[z] = halfDeck2[j];
		j++;
		z++;
	}

}

/*******************************************************************
 * bool compare();
 * This method will compare the two deck of cards
-----------------------------------------------------------------
 * Parameter:
-----------------------------------------------------------------
 * Return: cmpr (bool type variable)
*******************************************************************/
bool Deck::compare(string deck[], string shuffleDeck[]) const
{
	int i = 0;
	bool cmpr = true;

	while(i < 52 && cmpr)
	{
		if(deck[i] == shuffleDeck[i])
		{
			cmpr = true;
		}

		else
		{
			cmpr = false;
		}

		i++;
	}
	return cmpr;
}

/*******************************************************************
 * void returnToOriginal();
 * This method will prints out how many shuffles needed to
-----------------------------------------------------------------
 * Parameter:
-----------------------------------------------------------------
 * Return: none
*******************************************************************/
void Deck::returnToOriginal() const
{
	cout << shuffleCount << "  shuffles needed to return the deck to "
		 << "its original form" << endl;
}


