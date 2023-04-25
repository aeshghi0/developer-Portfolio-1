/******************************************************************************
* AUTHOR     : Serena Pedrazzini & Ali Eshghi
* STUDENT IDs: 385101 &
* LAB # 13   : Repetition- Buddy's Average Sheep Age Calculator
* CLASS      : CS1A
* SECTION    : TTH: 8am
* DUE DATE   : 4/16/19
******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
/******************************************************************************
* Sheep Average Age
*
* -----------------------------------------------------------------------------
*
* This program to help the farmers find the average of the ages of the sheep.
* -----------------------------------------------------------------------------
* INPUT:
*      sheepAge    : sheep's age
*
* OUTPUT:
*      avgSheepAge : average age of the sheep
* ****************************************************************************/
int main()
{
	/**************************************************************************
	 *   * CONSTANTS
     * ------------------------------------------------------------------------
     * OUTPUT - USED FOR CLASS HEADING
     * ------------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS      : Student's Course
	 * SECTION    : Class Days and Times
	 * LAB_NUM    : Lab Number (specific to this lab)
	 * LAB_NAME   : Title of the Lab
	 *************************************************************************/
	 const char PROGRAMMERS[] = "Serena Pedrazzin & Ali Eshghi";
	 const char CLASS[]       = "CS1A";
	 const char SECTION[]     = "TTH: 8:00a - 10:30a";
	 const int  LAB_NUM       =  13;
	 const char LAB_NAME[]    = "Buddy's Average Sheep Age Calculator";

 int    count;                   // IN. & CALC     - for the for loop counter
 float  sheepAge;                //  IN. & CALC    - age of sheep
 float  sheepCount;              //  CALC          - amount of sheep counted
 float  totalAge;                //  CALC          - the accumulated ages
 float  avgSheepAge;             //  CALC & OUTPUT - average age of sheep

 /**********************************************************************
 * OUTPUT - Class Heading
 **********************************************************************/
 cout << left;
     cout << "*************************************************\n";
     cout << "* PROGRAMMED BY : "     << PROGRAMMERS<< endl;
     cout << "* "         << setw(14) << "CLASS"    << ": " << CLASS    << endl;
     cout << "* "         << setw(14) << "SECTION"  << ": " << SECTION  << endl;
     cout << "* LAB_NAME" << setw(9)  << LAB_NUM    << ": " << LAB_NAME << endl;
     cout << "**************************************************\n\n";
     cout << right;
    /**************************************************************************
    * INPUT - reads in one inputs from the user:
    * sheepAge
    * ************************************************************************/

    //inputs will  be within the loop statements

   /*************************************************************************
    * PROCESS - the process to find the totalAge and sheepCount:
    *************************************************************************/

    totalAge    = 0;
    sheepCount  = 0;
    avgSheepAge = 0;

    for(count =1; count <= 3; count = count + 1)
    //while (sheepAge != -1)
      {
    	cout << "TEST #" << count << ":" << endl;
    	cout <<"Welcome to Buddy's Average Sheep Age Calculator!"<< endl<< endl;
    	cout << "\tEnter in the sheep ages, input -1 to exit";



         do
           {
        	cout << endl<< "\tEnter sheep age:";
         	cin >> sheepAge;

         	 if( sheepAge > 9)
         	 {
    	    	 cout<< endl<< "Invalid sheep age - please input a value less "
     				        << "than or equal to 9!"<< endl;
         	 }

           }while(sheepAge <= 9);



    while (sheepAge > -1)

     {
      totalAge   = totalAge + sheepAge;
      sheepCount = sheepCount + 1;

      cout << "\tEnter the sheep age:";
      cin  >> sheepAge;
      do
        {
    	 //cout << "\t Enter sheep age:";
    	 //cin >> sheepAge;

          if (sheepAge > 9)
            {
             cout << endl<< "Invalid sheep age - please input a value less"
      		      << "than or equal to 9!" << endl;
            }

         }while (sheepAge > 9);

      }


   /*************************************************************************
   * OUTPUT - the output as the following format as told in paper:
   *************************************************************************/

    cout << left;
     if (sheepCount != 0)
     {
      cout<< "The average age of the farmer's sheep is " << avgSheepAge << ".";
     }
     else
     {
      cout << "No valid inputs were entered for age" << endl;
     }
      }
return 0;
}