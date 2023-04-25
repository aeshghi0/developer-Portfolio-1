/******************************************************************************
* AUTHOR     : Ali Eshghi
* STUDENT IDs: 1112261
* ASSIGN 5   : Selection and repetition (The total Grade and GPA)
* CLASS      : CS1A
* SECTION    : TTH: 8am
* DUE DATE   : 4/23/19
******************************************************************************/
#include<iostream> //for the string sequences
#include<iomanip>  // for mathematics equations
using namespace std;
/******************************************************************************
* Total Grade point and GPA
*
* -----------------------------------------------------------------------------
*
* This program will help the user to input the letter grade of the students and 
* get the total grade of the student and the GPA.
* -----------------------------------------------------------------------------
* INPUT:
*      letGrade    : the letter grade of the student
*
* OUTPUT:
*      totGrade : the total grade of the student based on the letter grade that
*                 the user puts in.
*      
*      gpa      : the GPA of the student based on the total grades.
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
    const char PROGRAMMERS[]  = "Ali Eshghi";
	 const char CLASS[]       = "CS1A";
	 const char SECTION[]     = "TTH: 8:00a - 10:30a";
	 const int  ASSIGN        =  5;
	 const char LAB_NAME[]    = "Selection and Repetition ( the Total Grade and GPA)";

    char    letGrade;
    int     totGrade;
    int     caseCount;
    int     gradeCount;
    double  gpa;

    /**********************************************************************
 * OUTPUT - Class Heading
 **********************************************************************/
    cout << left;
     cout << "*************************************************\n";
     cout << "* PROGRAMMED BY : "     << PROGRAMMERS<< endl;
     cout << "* "         << setw(14) << "CLASS"    << ": " << CLASS    << endl;
     cout << "* "         << setw(14) << "SECTION"  << ": " << SECTION  << endl;
     cout << "* LAB_NAME" << setw(6)  << ASSIGN     << ": " << LAB_NAME << endl;
     cout << "**************************************************\n\n";
     cout << right;


    /**************************************************************************
    * INPUT - reads in one inputs from the user:
    * letGrade
    * ************************************************************************/

    //inputs will  be within the loop statements

   /*************************************************************************
    * PROCESS - the process to find the totGrade and gpa:
    *************************************************************************/
    
    
    for (caseCount = 1; caseCount <= 3; caseCount = caseCount + 1) //the program will run 3 times and the 4th time is the scape sequence
    {
        cout << "TEST CASE # " << caseCount << " :" << endl;

        gradeCount = 1;
        totGrade = 0;

        cout << "\tEnter Letter Grade #" << gradeCount << ":    ";
        cin.get(letGrade);

        

        cin.ignore(1000,'\n'); // to clear the input buffer before each loop
        
        
        while( letGrade != 'x' ) // the loop goes on until the x is inputed
        {
            do
            {
                //toupper(letGrade); (tried toupper() but it didn't work: problem?)
                if ((letGrade == 'A' && letGrade == 'B' && letGrade == 'C' && letGrade == 'D' && letGrade == 'F')
                ||  (letGrade == 'a' && letGrade == 'b' && letGrade == 'c' && letGrade == 'd' && letGrade == 'f'))
                {
                    cout << "The Grade entered unvalid, Enter a valid Grade " << endl;
                    cin  >> letGrade;
                }
            }while((letGrade == 'A' && letGrade == 'B' && letGrade == 'C' && letGrade == 'D' && letGrade == 'F')  // Error check for other letters
                || (letGrade == 'a' && letGrade == 'b' && letGrade == 'c' && letGrade == 'd' && letGrade == 'f'));// end of the do-While loop

            if ( letGrade == 'A' || letGrade == 'a')
            {
                totGrade = totGrade + 4;
            }
            else if ( letGrade == 'B' || letGrade == 'b')
            {
                totGrade = totGrade + 3;
            }
            else if ( letGrade == 'C' || letGrade == 'c')
            {
                totGrade = totGrade + 2;
            }
            else if ( letGrade == 'D' || letGrade == 'd')
            {
                totGrade = totGrade + 1;
            }
            else if ( letGrade == 'F' || letGrade == 'f')
            {
                letGrade = letGrade + 0;
            }

            gradeCount = gradeCount +1;

            cout << "\tEnter letter Grade #" << gradeCount << ":    ";
            cin.get(letGrade);
            cin.ignore(1000,'\n');

        } // end of the While loop


   /*************************************************************************
   * OUTPUT - Out put the total Grade points and the GPA of the students 
   * based on the letter grades that are inputed by the user:
   *************************************************************************/
        gpa = totGrade / (float)(gradeCount-1);

        if ( totGrade != 0 )
        {
            cout << "\n\nTotal Grade Points:  " << totGrade << endl;
            cout << fixed << setprecision(2);
            cout << "GPA :  " << gpa << endl << endl << endl;
        }
        else
        {
            cout <<" ";
        }
        



    }//End of the for loop
}