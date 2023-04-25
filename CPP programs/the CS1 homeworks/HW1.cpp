/**********************************************************************************
*   AUTHOR      : Ali Eshghi
*   STUDENT ID  : 1112261
*   LAB #7      : Eclipse Lab
*   CLASS       : CS1A
*   SECTION     : TTH: 8am
*   DUE DATE    : 2/26/19
***********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/***********************************************************************************
 * ECLIPSE TOTURIAL
 * ---------------------------------------------------------------------------------
 * Thins program will output the class heading
 * ---------------------------------------------------------------------------------
 * INPUT
 *          < There is no input for this program - output data is obtained through
 *          the constants.> 
 * 
 * OUTPUT:
 *      < This program will output a class heading.> 
*/

int main() 
{
    /******************************************************************************
     * CONSTANTS
     * ----------------------------------------------------------------------------
     * PROGRAMER    : Ali Eshghi
     * CLASS        : CS1A
     * SECTION      : TTH: 8am
     * LAB_NUM      : 7
     * LAB_NAME     : The eclipse program
     *****************************************************************************/

    const char PROGRAMMER[]= "Ali Eshghi";
    const char CLASS[]     = "CS1A";
    const char SECTION[]   = "TTH: 8am";
    const int  LAB_NUM     = 7;
    const char LAB_NAME[]  = "Eclipse Tutorial";

    // (Variable declaration go here)

    /****************************************************************************
     * OUTPUT - Class Heading 
    *****************************************************************************/
   cout << left;
   cout <<"***************************************************\n";
   cout <<" *    PROGRAMMED BY   :  "    << PROGRAMMER << endl;
   cout <<" *    "      << setw(14) << "CLASS"          << ": " << CLASS     <<  endl;
   cout <<" *    "      << setw(14) << "SECTION"        << ": " << SECTION   <<  endl;
   cout <<" *    "      << setw(9)  << "LAB_NUM"          << ": " << LAB_NUM   <<  endl;
   cout <<" *    "      << setw(14) << "LAB_NAME"       << ": " << LAB_NAME  <<  endl;
   cout <<" ***************************************************\n\n";
   cout <<right;

   /****************************************************************************
    * INPUT - the input is entered by the user (the name, the class, the section
    *  and the lab number and the lab name). the values or the string entered in
    * by the users are assigned to the names that we write before entering for 
    * them
   ****************************************************************************/

  /*****************************************************************************
   * PROCESSING - the computer assigned the values or the string entered by the 
   * user to the names and stored them in the memory so whenever they are called
   * or whenever we are using the names in a calculation or in a string, the 
   * computer knows the value or the string assigned to that name and uses it 
   * in the programing
  *****************************************************************************/

  /***************************************************************************
   * OUTPUT - in the output, we used the names that we assigned the 
  */

}