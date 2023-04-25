/******************************************************************************
* AUTHORS      : AJ Valipour
* STUDENT IDs  : 1103126
* ASSIGNMENT#  : 6
* CLASS        : CS1A
* SECTION      : TTH: 8am
* DUE DATE     : 5/7/19
*
*******************************************************************************
* FindAndOutputRate
*******************************************************************************
*  This function receives two integer, one is the total and the other one is
*   some part of the total which we find to find. Ten it outputs the percentage.
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;


void FindAndOutputRate(int trueCount,    // CALC       - total accepted applicants
                  int totalCount)   // CALC & OUT - the total amount of
                                    //              applicants.
{
    //ASSIGN
    float percentage;

    //PROCESSING
    percentage = (trueCount / (float) totalCount) * 100.0;

    //OUTPUT
    cout << left;
    cout << setprecision(0);
    cout << fixed;
    cout << endl << endl;
    cout << trueCount << " candidate(s) accepted!";
    cout << endl;
    cout << "That's " << percentage << "%!";
}
