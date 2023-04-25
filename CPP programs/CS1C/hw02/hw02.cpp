/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1C
 * SECTION    : MW 5pm
 * Assign #1  : Deck of cards
 * DUE DATE   : 22 January 2020
 ******************************************************************************/

#include"cardDeckClass.h"

/************************************************************
 * Deck of Cards
 * _________________________________________________________
 * This program initializes a new deck of cards and does a
 * perfect shuffle on the card and prints out the original
 * deck and the shuffled deck, then it calculates how many
 * more perfect shuffle is needed for the shuffled deck to
 * go back to original deck.
 * _________________________________________________________
 * INPUT: N/A
 *
 * OUTPUT: original deck of card, shuffled deck of card,
 * 		   the final deck of cards, the number of perfect
 * 		   shuffles needed to get back to original.
 *
 *
 ************************************************************/

int main()
{
	//Variables
	bool 	compare;	//PROCESS - boolean variable for compare
	Deck	card;		//PROCESS - class type variable for deck of card

	int shuffleCount = 0;	//PROCESS & OUT - outputs the number of shuffles
	string deck[DECK_SIZE];			//IN & OUT - initialized deck
	string shuffleDeck[DECK_SIZE];	//IN & OUT - shuffled deck


	//printing the header file
	//PrintHeader(asName, asNum);

	//initializing the deck of cards
	card.Initialize(deck);

	//printing the deck
	cout << "The original Deck..." << endl;
	card.print(deck);

	//shuffling the cards
	card.shuffle(deck, shuffleDeck);

	//printing the deck of card
	cout << "Deck after one shuffle..." << endl;
	card.print(shuffleDeck);

	//comparing the deck of cards
	compare = card.compare(deck, shuffleDeck);


	//while loop to shuffle the cards until the shuffled deck is like
	//the original deck
	while(compare == false)
	{
		card.shuffle(shuffleDeck, shuffleDeck);
		compare = card.compare(deck,shuffleDeck);
		shuffleCount++;
	}

	//printing the final deck
	if(compare == true)
	{
		card.print(shuffleDeck);
		cout << shuffleCount << "  shuffles needed to return the deck to "
		 << "its original form" << endl;
	}

	//returning the 0 for program that eliminates successfully
	return 0;
}
