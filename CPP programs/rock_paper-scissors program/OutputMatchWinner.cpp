#include "header.h"


void OutputMatchWinner(string user,
					   int turns,
					   int loseCount,
					   int winCount)
{

	float	winPercent;
	float	losePercent;

	winPercent  = (winCount * 100) / (float)turns;
	losePercent = 100 - winPercent;

	cout << "***********************************" << endl;
	cout << "*********  FINAL RESULTS  *********" << endl;
	cout << "***********************************" << endl << endl;
	cout << setprecision(0) << fixed;
	if(winCount < loseCount)
	{

		cout << user << " is the WINNER, WINNER, CHICKEN DINNER!!" << endl;
		cout << user << " won " << winPercent << "% of the time!";

	}
	else
	{
		cout << user << " lost to the computer, sucker" << endl;
		cout << user << " lost " << losePercent << "% of the time!" << endl;
	}

}

