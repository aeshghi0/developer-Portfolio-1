/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1C
 * SECTION    : MTWTH 3pm
 * HW06       : Recursion
 * DUE DATE   : 25 June 2020
 ******************************************************************************/
#include"hw06.h"
/************************************************************
 * Recursion
 * _________________________________________________________
 * This program initializes and array with alphabet and then 
 * prompts the user for two integer 3 times. each time the user
 * defines two index that from frist index and the last index
 * all the letters in the string reverse in position(Note:
 * there are 6 execution in total that 3 of them are using 
 * recursion and the second 3 are using loop method)
 * _________________________________________________________
 * INPUT: first: first index
 *        last:  second index
 *
 * OUTPUT: the string with reverse letters from chosen indexes
 ************************************************************/
int main()
{
    //Variables
    string alpha;   //PROCESS & OUT - string that we reverse its parts
    int first,last; //IN & PROCESS  - the first and the last character
                    //                of part string that is going tochange

    //Reversing using recursion
    cout << "Initializing the alphabet string..." << endl;
    alpha = "abcdefghijklmnopqrstuvwxyz";
    cout << "Reversing the alphaber using recursion: " << endl;

    //execution applies 3 times using for loop
    for(int i=0; i<3; i++)
    {
        cout << "Enter the start index: ";
        cin >> first;

        cout << "Enter the end index: ";
        cin >> last;

        reverseString(alpha, first, last);

        //reinitialization of alpha string
        alpha.clear();
        alpha = "abcdefghijklmnopqrstuvwxyz";
    }

    //Reversing using loop
    cout << "Reversing the alphabet using loop: " << endl;
    for(int i=0; i<3; i++)
    {
        cout << "Enter the start index: ";
        cin >> first;

        cout << "Enter the end index: ";
        cin >> last;

        reverseStringLoop(alpha, first, last);

        //re-initializing alpha string
        alpha.clear();
        alpha = "abcdefghijklmnopqrstuvwxyz";
    }

    return 0;
}