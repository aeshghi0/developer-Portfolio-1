#include "header.h"

char GetAndCheckPlay(string name)
{
	char	userPlay;
	bool	invalidPlay;


	cout << endl;
	cout << "**********************" << endl;
	cout << "** CHOOSE YOUR PLAY **" << endl;
	cout << "**********************" << endl;
	cout << "R - Rock"     << endl;
	cout << "P - Paper"    << endl;
	cout << "S - Scissors" << endl;


	do
	{
	cout << "Enter your Play:  ";
	cin.get(userPlay);
	cin.ignore(10000,'\n');

	invalidPlay = userPlay != 's' && userPlay != 'S'
			   && userPlay != 'p' && userPlay != 'P'
			   && userPlay != 'r' && userPlay != 'R';

	if(invalidPlay)
	{
		cout << "\n\n** INVALID INPUT - Please Enter (R, P, or S)\n\n" << endl;
		cout << "R - Rock"     << endl;
		cout << "P - Paper"    << endl;
		cout << "S - Scissors" << endl;
	}


	}while(invalidPlay);

	if(userPlay == 'R' || userPlay == 'r')
	{
		cout << "\n\n" << name << " Chooses Rock!" << endl;
	}
	else if(userPlay == 'S' || userPlay == 's')
	{
		cout << "\n\n" << name << " Chooses Scissors!" << endl;
	}
	else if(userPlay == 'P' || userPlay == 'p')
	{
		cout << "\n\n" << name << " Chooses Paper!" << endl;
	}

	return userPlay;
}



