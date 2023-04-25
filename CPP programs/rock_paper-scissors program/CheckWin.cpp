#include "header.h"

bool CheckWin(char userChoice, char compChoice)
{

	bool winCheck;



	winCheck = (compChoice == 'R' && (userChoice == 'S' || userChoice == 's' || userChoice == 'r' || userChoice == 'R'))
			 ||(compChoice == 'S' && (userChoice == 'P' || userChoice == 'p' || userChoice == 's' || userChoice == 'S'))
			 ||(compChoice == 'P' && (userChoice == 'R' || userChoice == 'r' || userChoice == 'p' || userChoice == 'P'));


	return winCheck;
}

