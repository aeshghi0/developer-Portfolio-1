/******************************************************************************
 * AUTHORS         : Ali Eshghi
 * STUDENT ID      : 1112261
 * Assignment 4    : New Salary
 * CLASS           : CS1A
 * SECTION         : TTh: 8am
 * DUE DATE        : 3/28/19
 *****************************************************************************/

#include  <iostream>
#include  <iomanip>
using namespace std;
/******************************************************************************
* assignment 4
* -----------------------------------------------------------------------------
* this program will calculate and output the new salary based on the raise that 
* the user got and the difference of salary from January to June
* -----------------------------------------------------------------------------
* INPUT:
*       - name
*       - currentSalary
*       - payIncrease
* OUTPUT:
*       - newSalary
*       - monthlySalary
*       - retrievePay
******************************************************************************/

int main()
{
    char        name[20];
    double      currentSalary;
    double      payIncrease;
    double      newSalary;
    double      monthlySalary;
    double      oldMonthlySalary;
    double      retroactivePay;

    /**************************************************************************
	* CONSTANTS
	* -------------------------------------------------------------------------
	* OUTPUT - USED FOR CLASS HEADING
	* -------------------------------------------------------------------------
	* PROGRAMMER     : Programmer's Name
	* CLASS          : student's Course'
	* SECTION        : class days and times
	* LAB_NUM        : lab Number(or assignment)
	* LAB_NAME       : title of the lab( or assignment)
	**************************************************************************/

	const char PROGRAMMERS[] = "Ali Eshghi ";
	const char CLASS[]		 = "CS1A";
	const char SECTION[]     = "TTh: 8a - 10:15a";
	const float ASSIGN       =  4;
	const char ASSIGN_NAME[] =  "New Salary";


    cout << "what is your name?           ";
    cin.getline(name, 20);

    cout << "What is your current salary? ";
    cin  >> currentSalary;

    cout << "What is your pay increase?   ";
    cin  >> payIncrease;


    newSalary        = (currentSalary * payIncrease) + currentSalary;
    monthlySalary    = newSalary / 12;
    oldMonthlySalary = currentSalary / 12;
    retroactivePay   = (monthlySalary - oldMonthlySalary) * 6;




    cout << left;
    cout << "*************************************************************\n";
	cout << "*   PROGRAMMED BY :"   << PROGRAMMERS<< endl;
	cout << "*  "       << setw(14) << "CLASS   " << ": "<< CLASS       << endl;
	cout << "*  "       << setw(14) << "SECTION " << ": "<< SECTION     << endl;
	cout << "*   LAB #" << setw(9)  << ASSIGN     << ": "<< ASSIGN_NAME << endl;
	cout << "***********************************************************\n\n";
	cout << right;


    cout << left; 
    cout << fixed    << setprecision(2);
    cout << name     << " SALARY INFORMATION: "   << endl;
    cout << setw(15) << "New Salary"
    cout << setw(19) << "Monthly Salary"
	cout << setw(15) << "Retroactive Pay" << endl;
    cout << right; 
    cout << setw(10) <<  newSalary
    cout << setw(19) <<  monthlySalary
	cout << setw(20) <<  retroactivePay   << endl;



}
