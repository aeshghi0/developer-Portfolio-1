/******************************************************************************
 * AUTHORS         : Donya Mahmoudi & Siavash Baghalian 
 * STUDENT ID      : 1144200
 * LAB #9          : Output - Lab_9
 * CLASS           : CS1A
 * SECTION         : TTh: 8am
 * DUE DATE        : 3/14/19
 *****************************************************************************/

#include  <iostream>
#include  <iomanip>
using namespace std;

/******************************************************************************
* OUTPUT - GEOMETRY
* -----------------------------------------------------------------------------
* this program will read in values and output the area of each triangle,
  rectangle & circle
* -----------------------------------------------------------------------------
* INPUT:
*       triHeight  - first vlaue to find trigArea
*       triBase - 
*       recHeight
*       recWidth 
*       ratioOfCircumference
*       radius - 
* OUTPUT:
*       triArea
*       reacArea
*       cirArea
******************************************************************************/
int main()
{
	/**************************************************************************
	* CONSTANTS
	* -------------------------------------------------------------------------
	* OUTPUT - USED FOR CLASS HEADING
	* -------------------------------------------------------------------------
	* PROGRAMMER     : Programmer's Name
	* CLASS          : student's Course'
	* SECTION        : class days and times
	* LAB_NUM        : lab Number(specific to this lab)
	* LAB_NAME       : title of the lab
	**************************************************************************/

	const char PROGRAMMERS[]  = "Donya Mahmoudi & Siavash Baghalian ";
	const char CLASS[]		 = "CS1A";
	const char SECTION[]     = "TTh: 8a - 10:15a";
	const float LAB_NUM      =  9;
	const char LAB_NAME[]    =  "output - geometry";
	const double  PI			 = 3.14159;

	double  triHeight;            // IN. CALC & OUT - first vlaue to find trigArea
	double  triBase;              // IN. CALC & OUT - second value to find triArea
	double  recHeight;            // IN. CALC & OUT - first vlaue to find recArea
	double  recWidth;             // IN. CALC & OUT - second value to find recArea
	double  ratioOfCircumference;                  // IN. CALC & OUT - first value to find cirArea
	double  cirRadius;            // IN. CALC & OUT - second value to find cirArea
	double  triArea;                // CALC & OUT - area of triangle
	double  recArea;               // CALC & OUT - area of rectangle
	double  cirArea;               //  CALC & OUT    - area of circle

	/**************************************************************************
	 * OUTPUT - Class Heading
	 *************************************************************************/
	cout << left;
	cout << "*************************************************************\n";
	cout << "*   PROGRAMMED BY :"   << PROGRAMMERS<< endl;
	cout << "*  "       << setw(14) << "CLASS"   << ": "<< CLASS     << endl;
	cout << "*  "       << setw(14) << "SECTION" << ": "<< SECTION   << endl;
	cout << "*   LAB #" << setw(9)  << LAB_NUM   << ": "<< LAB_NAME  << endl;
	cout << "***********************************************************\n\n";
	cout << right;

	/**************************************************************************
	* INPUT - reads six inputs from the user (triHeight, triBase, recHeight,
	 recWidth, pi, cirRadius)
	**************************************************************************/
     cout << "Enter triangle height:  ";
     cin  >> triHeight;

     cout << "Enter triangle base:  ";
     cin  >> triBase;
     
     cout << "\n\nEnter rectangle height: ";
     cin >> recHeight;
     
     cout << "Enter rectangle width: ";
     cin >> recWidth;
     /*
     cout << "Enter ratioOfCircumference : ";
     cin >> 3.14159;
     */
     cout << "\n\nEnter circle radius: ";
     cin >> cirRadius;
     /*
     cout << stew(17) << "Trianle Area" << stew(19) << "Rectangle Area" << setw(16) << "Circle Area" << endl
     cout << stew(17) << triArea << stew(19) << recArea << setw(16) << cirArea << endl
     cout << stew(17) << triArea << stew(19) << recArea << setw(16) << cirArea << endl
     cout << stew(17) << triArea << stew(19) << recArea << setw(16) << cirArea << endl
     cout << stew(17) << triArea << stew(19) << recArea << setw(16) << cirArea << endl
     cout << stew(17) << triArea << stew(19) << recArea << setw(16) << cirArea << endl
     cout << stew(17) << triArea << stew(19) << recArea << setw(16) << cirArea << endl
     */
    /**************************************************************************
    * PROCESSING - calculates the area for each triangle, rectangle & circle
    **************************************************************************/

     triArea = triHeight * triBase / 2.0;
     recArea = recHeight * recWidth;
     cirArea = PI * cirRadius * cirRadius;

	/**************************************************************************
	 * OUTPUT - the inputs and the area in the following format:
	 *  cout << stew(17) << "Trianle Area" << stew(19) << "Rectangle Area" << setw(16) << "Circle Area" << endl       
    
	**************************************************************************/

    cout << setw(17) << "Trianle Area";
	cout << setw(19) << "Rectangle Area"; 
	cout << setw(16) << "Circle Area" << endl;

    cout << setw(17) << triArea; 
	cout << setw(19) << recArea;
	cout << setw(16) << cirArea << endl;

	cout << setprecision(3);
    cout << setw(17) << triArea;
	cout << setw(19) << recArea;
	cout << setw(16) << cirArea << endl;

	cout << showpoint;
    cout << setw(17) << triArea;
	cout << setw(19) << recArea;
	cout << setw(16) << cirArea << endl;
	cout << noshowpoint;

	cout << fixed;
    cout << setw(17) << triArea;
	cout << setw(19) << recArea;
	cout << setw(16) << cirArea << endl;

	cout << setprecision(5);
    cout << setw(17) << triArea;
	cout << setw(19) << recArea;
	cout << setw(16) << cirArea << endl;
	cout.unsetf(ios::fixed);
	
	cout << setprecision(6);
    cout << setw(17) << triArea;
	cout << setw(19) << recArea;
	cout << setw(16) << cirArea << endl;
     

	return 0;
}

/*
	Alis-MacBook-Pro:~ alieshghi$ cd "/Users/alieshghi/Desktop/" && g++ lab9.cpp -o lab9 && "/Users/alieshghi/Desktop/"lab9
*************************************************************
*   PROGRAMMED BY :Donya Mahmoudi & Siavash Baghalian 
*  CLASS         : CS1A
*  SECTION       : TTh: 8a - 10:15a
*   LAB #9        : output - geometry
***********************************************************

Enter triangle height:  12.345
Enter triangle base:  15.23


Enter rectangle height: 17.32
Enter rectangle width: 25


Enter circle radius: 35
     Trianle Area     Rectangle Area     Circle Area
          94.0072                433         3848.45
               94                433        3.85e+03
             94.0               433.        3.85e+03
           94.007            433.000        3848.448
         94.00718          433.00000      3848.44775
          94.0072                433         3848.45
Alis-MacBook-Pro:Desktop alieshghi$ 
*/