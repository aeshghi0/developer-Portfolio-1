/*******************************************************************************
* AUTHORS      : AJ Valipour
* STUDENT IDs  : 1103126
* ASSIGNMENT#  : 6
* CLASS        : CS1A
* SECTION      : TTH: 8am
* DUE DATE     : 5/7/19
********************************************************************************/

#include <iostream>     /* Input - Output       */
#include <iomanip>      /* Setprecision - Fixed */

using namespace std;

char GetCheckGender(int IN_PROMPT);
bool GetCheckHeight(int   IN_PROMPT,
                    char  userGender,
                    int   MAX_HEIGHT,
                    int   MIN_HEIGHT,
                    int   MAX_M_REQ_HEIGHT,
                    int   MIN_M_REQ_HEIGHT,
                    int   MAX_F_REQ_HEIGHT,
                    int   MIN_F_REQ_HEIGHT);
bool GetCheckWeight(int   IN_PROMPT,
                    char  userGender,
                    int   MAX_WEIGHT,
                    int   MIN_WEIGHT,
                    int   MAX_M_REQ_WEIGHT,
                    int   MIN_M_REQ_WEIGHT,
                    int   MAX_F_REQ_WEIGHT,
                    int   MIN_F_REQ_WEIGHT);
void FindAndOutputRate(int trueCount,
                       int totalCount);
//void PrintHeader(char asNAME,
//                 int    asNUM ,
//                 char   asType = 'A');



/*******************************************************************************
 * SELECTION & REPETITION
 * -----------------------------------------------------------------------------
 * This program will obtain from the user their gender, height and their weight.
 *      Then by analyzing the data, it will see if the user pass or fail each
 *      requirement and it will inform the user in what category they couldn't
 *      meet the requirements.
 * -----------------------------------------------------------------------------
 * INPUT:
 *      genderType
 *      height
 *      weight
 *
 * OUTPUT:
 *      totalUsers
 *      userPassed
 *
 *******************************************************************************/

int main()
{
    /***************************************************************************
     * CLASS HEADING
     ***************************************************************************
     * CONSTANTS
     * -------------------------------------------------------------------------
     * OUTPUT - USED FOR CLASS HEADING
     * -------------------------------------------------------------------------
     *      LAB_NUM    : Lab Number (specific to this lab)
     *      LAB_NAME   : Title of the Lab
     * -------------------------------------------------------------------------
     * PROSSECING - USED FOR BOOL EXPRESSIONS
     * -------------------------------------------------------------------------
     *   MAX_HEIGHT_CHECK       : the maximum namuber user can input for height
     *   MIN_HEIGHT_CHECK       : the minimum namuber user can input for height
     *   MAX_MALE_REQ_HEIGHT    : the highest acceptable height for men
     *   MIN_MALE_REQ_HEIGHT    : the lowest acceptable height for men
     *   MAX_FEMALE_REQ_HEIGHT  : the highest acceptable height for women
     *   MIN_FEMALE_REQ_HEIGHT  : the lowest acceptable height for women
     *   MAX_WEIGHT_CHECK       : the maximum namuber user can input for weight
     *   MIN_WEIGHT_CHECK       : the minimum namuber user can input for weight
     *   MAX_MALE_REQ_WEIGHT    : the highest acceptable weight for men
     *   MIN_MALE_REQ_WEIGHT    : the lowest acceptable weight for men
     *   MAX_FEMALE_REQ_WEIGHT  : the highest acceptable weight for women
     *   MIN_FEMALE_REQ_WEIGHT  : the lowest acceptable weight for women
     * -------------------------------------------------------------------------
     * OUTPUT - FORMATTING
     * -------------------------------------------------------------------------
     *      INPUT_PROMPT : used for the spacing for each input
     ***************************************************************************/
    //const char   LAB_NAME[30]             = "Loops & Boolean Expressions";
    //const int    LAB_NUM                = 6;
    const int    INPUT_PROMPT           = 8;
    const int    MAX_HEIGHT_CHECK       = 110;
    const int    MIN_HEIGHT_CHECK       = 24;
    const int    MAX_MALE_REQ_HEIGHT    = 80;
    const int    MIN_MALE_REQ_HEIGHT    = 65;
    const int    MAX_FEMALE_REQ_HEIGHT  = 75;
    const int    MIN_FEMALE_REQ_HEIGHT  = 62;
    const int    MAX_WEIGHT_CHECK       = 1400;
    const int    MIN_WEIGHT_CHECK       = 50;
    const int    MAX_MALE_REQ_WEIGHT       = 250;
    const int    MIN_MALE_REQ_WEIGHT       = 130;
    const int    MAX_FEMALE_REQ_WEIGHT       = 185;
    const int    MIN_FEMALE_REQ_WEIGHT       = 110;

    /**********************************************
     * VARIABLES
     **********************************************/

    char genderType;          // IN & CALC - used to match the requirements for
                              //              height and weight
    //char labType [];          // CALC      - used to match the best class headig

    int  totalUsers;          // CALC & OUT - used to count the total number
                              //               users inputed info
    int  userPassed;          // CALC & OUT - to couned the users who accepted

    bool acceptableHeight;    // CALC & OUT - condition for the output statement
    bool acceptableWeight;    // CALC & OUT - condition for the output statement

    /************************
     * OUTPUT CLASS HEADING *
     ************************/
    //PrintHeader(char LAB_NAME, int LAB_NUM, char labType = 'A');

    // Assign
    totalUsers = 0;
    userPassed = 0;

    /**********************
     * INPUT & PROCESSING *
     **********************/

    cout << "Please enter the candidate's inforation (enter 'X' to exit).\n";
    genderType = GetCheckGender(INPUT_PROMPT);

    // checks for "X" to exit the loop
    while (genderType != 'x' && genderType != 'X')
    {
        //Gets the height and checks if it's acceptable or not
        acceptableHeight = GetCheckHeight(INPUT_PROMPT,
                                          genderType,
                                          MAX_HEIGHT_CHECK,
                                          MIN_HEIGHT_CHECK,
                                          MAX_MALE_REQ_HEIGHT,
                                          MIN_MALE_REQ_HEIGHT,
                                          MAX_FEMALE_REQ_HEIGHT,
                                          MIN_FEMALE_REQ_HEIGHT);

        //Gets the weight and checks if it's acceptable or not
        acceptableWeight = GetCheckWeight(INPUT_PROMPT,
                                          genderType,
                                          MAX_WEIGHT_CHECK,
                                          MIN_WEIGHT_CHECK,
                                          MAX_MALE_REQ_WEIGHT,
                                          MIN_MALE_REQ_WEIGHT,
                                          MAX_FEMALE_REQ_WEIGHT,
                                          MIN_FEMALE_REQ_WEIGHT);

        /**********
         * OUTPUT *
         **********/

        cout << endl << endl;
        cout << "This candidate has been ";

        //checks to matchs the best output with the functions result

        if (acceptableWeight)
        {
            if (acceptableHeight)
            {
                cout << "ACCEPTED!";
                userPassed++;
            }
            else
            {
                cout << "rejected based on the HEIGHT requirement.";
            }
        }
        else
        {
            if (acceptableHeight)
            {
                cout << "rejected based on the WEIGHT requirement.";
            }
            else
            {
                cout << "rejected based on the HEIGHT and WEIGHT requirement.";
            }
        }

        totalUsers++;

        cout << endl << endl << endl;
        cout << "Please enter the candidate's inforation (enter 'X' to exit).";
        cout << endl;
        genderType = GetCheckGender(INPUT_PROMPT);

    } // END - WHILE

    // checks for the denominator to be more than zero, for the error
    if (totalUsers > 0)
    {
        // it will input the data and get the result for the acceptance rate
        FindAndOutputRate(userPassed, totalUsers);
    }

    return 0;
}
