/**********************************************************************************
*   AUTHOR      : Ivan Ma
*   STUDENT ID  : 1114811
*   LAB #12     : the sheep lab
*   CLASS       : CS1A
*   SECTION     : TTH: 8am
*   DUE DATE    : 4/9/19
***********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int 	LOOP_CONTROL = 6;

	int 		sheepAge;
	int			count;
	int 		totalAge;
	float  	ageAverage;



	totalAge = 0;

	for(count = 1; count < LOOP_CONTROL; count = count + 1)
	{
		cout << "Sheep age?:  ";
		cin  >> sheepAge;
        totalAge = totalAge + sheepAge;
	}

	ageAverage = totalAge / (float)(count - 1);


    cout << setprecision(4);
	cout << "the average of the " << 5 << "sheeps are "<< ageAverage << endl;

	return 0;
}
