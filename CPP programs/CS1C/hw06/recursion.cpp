/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1C
 * SECTION    : MTWTH 3pm
 * HW06       : Recursion
 * DUE DATE   : 25 June 2020
 ******************************************************************************/
#include"hw06.h"

//function tyoe void: reverses the part of string
void reverseString(string& alpha, int x, int y)
{
    //variables
    char t; //PROCESS - temporary char variable

    //if statement for if the first number is bigger than the second one
    if(x > y)
    {
        cout << alpha << endl;
        return;
    }

    //switching the characters
    t = alpha[x];
    alpha[x] = alpha[y];
    alpha[y] = t;

    //calling the recursion function 
    reverseString(alpha, x+1, y-1);
}