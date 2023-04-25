#include "header.h"


int main()
{
	const int 	KID_POPULATION = 10;
	int			kidCount;
	string		kidName;
	int			kidAge;
	char		vegi;
	char		eatCheese;

	for (kidCount = 1; kidCount <=10; kidCount++)
	{
		cout << "kid #" << kidCount;

		cout << "What is your kid's name?	 	";
		cin  >> kidName;

		cout << "How old is the kid?		 	";
		cin  >> kidAge;

		cout << "Vegeterian(Y/N)?				";
		cin.get(vegi);

		cout << "Does he/she eat cheese(Y/N)?	";
	}


	return 0;
}

