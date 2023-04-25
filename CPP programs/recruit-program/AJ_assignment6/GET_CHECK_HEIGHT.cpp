/******************************************************************************
* AUTHORS      : AJ Valipour
* STUDENT IDs  : 1103126
* ASSIGNMENT#  : 6
* CLASS        : CS1A
* SECTION      : TTH: 8am
* DUE DATE     : 5/7/19
*
*******************************************************************************
* GetCheckHeight
*******************************************************************************
* This function will receive and check an integer for Height. Then depending
*  on the gender it will check to see if the user's data are acceptable or not.
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

bool GetCheckHeight(int   IN_PROMPT,
                    char  userGender,
                    int   MAX_HEIGHT,
                    int   MIN_HEIGHT,
                    int   MAX_M_REQ_HEIGHT,
                    int   MIN_M_REQ_HEIGHT,
                    int   MAX_F_REQ_HEIGHT,
                    int   MIN_F_REQ_HEIGHT)

{
    //VARIABLES
    int height;
    bool acceptHeight;

    cout << left;

    //INPUT
    do
    {
        cout << setw(IN_PROMPT) << "Height:";
        cin  >> height;
        cin.ignore(1000, '\n');

        if (height <= MIN_HEIGHT || height >= MAX_HEIGHT)
        {
            cout << "***** Invalid height;";
            cout << " please enter a height in inches ";
            cout << " between 24 and 110. *****";
            cout << endl;
        } // END - IF

    } while (height <= MIN_HEIGHT || height >= MAX_HEIGHT);
    // END - DO WHILE

    cout << right;

    //PROCESSING
    acceptHeight = (    ( userGender == 'm' || userGender == 'M'   )
                         && ( height >=  MIN_M_REQ_HEIGHT
                              && height <=  MAX_M_REQ_HEIGHT )         )
                         || ( ( userGender == 'f' || userGender == 'F' )
                         && (height >=  MIN_F_REQ_HEIGHT
                              && height <=  MAX_F_REQ_HEIGHT )         );

    return acceptHeight;
}


