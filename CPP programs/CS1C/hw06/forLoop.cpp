/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1C
 * SECTION    : MTWTH 3pm
 * HW06       : Recursion
 * DUE DATE   : 25 June 2020
 ******************************************************************************/
#include"hw06.h"

void reverseStringLoop(string& alpha, int x, int y)
{
    //Variables
    char t; //PROCESS - temporary variable storing the char variable

    //if statement if the first number is bigger than the second one
    if(x > y)
    {
        return; //returns nothing
    }

    //while loop for reversing part of string
    while(x < y)
    {
        //switching the char variables
        t = alpha[x];
        alpha[x] = alpha[y];
        alpha[y] = t;

        //changing the LCV
        x++;
        y--;
    }

    cout << alpha << endl;
}