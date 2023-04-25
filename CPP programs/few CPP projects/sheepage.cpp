#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int 	sheepAge;
	int		count;
	int 	ageTotal;
	double  ageAverage;

	

	ageTotal = 0;
    
	for(count = 1; count < 6; count = count + 1)
	{
		cout << "enter the sheep age:  ";
		cin  >> sheepAge;
        ageTotal = ageTotal + sheepAge;
	}

	ageAverage = ageTotal / 5;

	cout << "the average age of the sheeps are " << ageAverage << endl;

	return 0;
}
