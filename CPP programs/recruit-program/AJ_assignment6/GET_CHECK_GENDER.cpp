/******************************************************************************
* AUTHORS      : AJ Valipour
* STUDENT IDs  : 1103126
* ASSIGNMENT#  : 6
* CLASS        : CS1A
* SECTION      : TTH: 8am
* DUE DATE     : 5/7/19
*
*******************************************************************************
* GetCheckGender
*******************************************************************************
* This function will receive an character from user to check if the user is
*  male or female.
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

char GetCheckGender(int IN_PROMPT)
{
    char gender;
    bool invalidGender;
    cout << left;


    //INPUT
    do
    {
        cout << setw(IN_PROMPT) << "Gender:";
        cin.get(gender);
        cin.ignore(1000, '\n');

        invalidGender = gender != 'm' && gender != 'M'
            		     && gender != 'f' && gender != 'F'
            		     && gender != 'x' && gender != 'X';
        if(invalidGender)
        {
            cout << "***** Invalid gender;";
            cout << "please enter M or F *****";
            cout << endl;
        } // END - IF

    } while(invalidGender);
    //END - DO WHILE

    cout << right;

    return gender;
}
