#include <iostream>
#include <iomanip>
#include "AcceptableHeight.cpp"
#include "AcceptableWeight.cpp"
using namespace std;

const   char    GENDER_ERROR[49] = "***** Invalid gender;please enter M or F *****\n";


char	    gender;
char        genderError[100];

int		    weight;         //IN & PROCESS-user input and use in the process
int		    height;         //IN & PROCESS-user input and use in the process
int         candCount;      //PROCESS-counter of the times the loop is run
int         acceptCount;    //PROCESS-counter of the an if statement

int 	acceptableHeight;
int		acceptableWeight;

int main()
{


    candCount = 1;
    acceptCount = 0;


	// put this statement in a do-while loop so that error check along the boolean expretion
    cout << "Please enter the candidate's information (enter \'X\' to exit)" << endl;

    do
    {
        cout << "Gender:  ";
	    cin.get(gender);
	    cin.ignore(1000, '\n');




    } while (gender != 'm' && gender != 'M' && gender != 'f' && gender != 'F' && gender != 'x' && gender != 'X');
    //ende of the do-while loop


    while (gender != 'x' && gender != 'X')
	{
        cout << "Height:  ";
	    cin  >> height;
        acceptableHeight = TheAcceptableHeight(height);

        cout << "Weight:  ";
        cin  >> weight;
        acceptableWeight = TheAcceptableWeight(weight);



        if (acceptableHeight && acceptableWeight)
        {
            cout << "\n\nThe candidate has been ACCEPTED\n\n\n";
            acceptCount++;
        }
        else if (!acceptableWeight && acceptableHeight)
        {
            cout << "\n\nThis candidate has been rejected based on the WEIGHT requirement.\n\n\n";
        }
        else if (!acceptableHeight && acceptableWeight)
        {
            cout << "\n\nThis candidate has been rejected based on the HEIGHTrequirement.\n\n\n";
        }
        else if (!acceptableHeight && !acceptableWeight)
        {
            cout << "\n\nThis candidate has been rejected based on the HEIGHTand WEIGHTrequirements.\n\n\n";
        }

        candCount++;

        cout << "Gender::  ";
	    cin.get(gender);
        cin.ignore(1000,'\n');

	}//end of the while loop




	return 0;
}


    //(gender != 'm' && gender != 'M') && (gender != 'f' && gender != 'F') ? cout << GENDER_ERROR: cout << endl;
/*cout << "Weight:  ";
	    cin  >> weight;
        cin.ignore(1000,'\n');

        gender == 'm' || gender == 'M'? acceptableHeight = height >= 65 && height <= 80 :
        gender == 'f' || gender == 'F'? acceptableHeight = height >= 62 && height <= 75:
        cout << endl;

        gender == 'm' || gender == 'M'? acceptableWeight = weight >= 130 && weight <= 250:
        gender == 'f' || gender == 'F'? acceptableWeight = height >= 110 && weight <= 185:
        cout << endl;*/