#include "header.h"

char GetCompPlay()
{
	int 	compPlay;
	char	compChoice;

	compPlay = rand() % 3 + 1;

	switch(compPlay)
	{
		case 1: compChoice = 'R';                             				  //strncpy(compChoice,"Rock", 9);
		break;

		case 2: compChoice = 'P';											  //strncpy(compChoice,"Paper", 9);
		break;

		case 3: compChoice = 'S';											//strncpy(compChoice,"Scissors", 9);
	}

	if(compChoice == 'R')
	{
		cout << "computer Chooses Rock!\n\n" << endl;
	}
	else if(compChoice == 'P')
	{
		 cout << "computer Chooses Paper!\n\n" << endl;
	}
	else if(compChoice == 'S')
	{
		cout << "Computer Chooses Scissors!\n\n" << endl;
	}




	return compChoice;
}

