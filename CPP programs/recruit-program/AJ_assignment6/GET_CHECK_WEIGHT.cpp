/******************************************************************************
* AUTHORS      : AJ Valipour
* STUDENT IDs  : 1103126
* ASSIGNMENT#  : 6
* CLASS        : CS1A
* SECTION      : TTH: 8am
* DUE DATE     : 5/7/19
*
*******************************************************************************
* GetCheckWeight
*******************************************************************************
* This function will receive and check an integer for Weight. Then depending
*  on the gender it will check to see if the user's data are acceptable or not.
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

bool GetCheckWeight(int   IN_PROMPT,
                    char  userGender,
                    int   MAX_WEIGHT,
                    int   MIN_WEIGHT,
                    int   MAX_M_REQ_WEIGHT,
                    int   MIN_M_REQ_WEIGHT,
                    int   MAX_F_REQ_WEIGHT,
                    int   MIN_F_REQ_WEIGHT)

{
    // ASSIGNMENT
    int weight;
    bool acceptWeight;

    cout << left;

    // INPUT
    do
    {
        cout << setw(IN_PROMPT) << "Weight:";
        cin  >> weight;
        cin.ignore(1000, '\n');

        if (weight <= MIN_WEIGHT || weight >=  MAX_WEIGHT)
        {
            cout << "***** Invalid weight;";
            cout << " please enter a weight in lbs ";
            cout << " between 50 and 1400. *****";
            cout << endl;
        } // END - IF

    } while (weight <= MIN_WEIGHT || weight >= MAX_WEIGHT);
    // END - DO WHILE

    //PROCESSING
    acceptWeight = (    ( userGender == 'm' || userGender == 'M'   )
                         && ( weight >=  MIN_M_REQ_WEIGHT
                              && weight <=  MAX_M_REQ_WEIGHT )         )
                         || ( ( userGender == 'f' || userGender == 'F' )
                         && (weight >=  MIN_F_REQ_WEIGHT
                              && weight <=  MAX_F_REQ_WEIGHT )         );

    return acceptWeight;
}


