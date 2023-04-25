/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW3a         : Dice game
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 7/4/21
 ******************************************************************************/
public class HW3a {
    /*****************************************************************************
     *	 Dice game
     * ___________________________________________________________________________
     *
     * 	 This Program generates two random number, each is assigned to a dice that
     * 	 represents the computer and the user dice. the program does the last step
     * 	 10 times in a row and each time, the program compares two number and
     * 	 decides that the player with higher die gets a point. at the end of the
     * 	 program, the program gives out the result for which player was the winner
     * ___________________________________________________________________________
     *	 INPUT :
     *	 	N/A
     *
     *	 OUTPUT:
     *	 	compWinCnt : computer point count
     *	    userWinCnt : user point count
     *	    displays points of each player and who won the game
     *****************************************************************************/
    public static void main(String[] args){

        //declaring variables
        int compDie = 0;
        int userDie = 0;

        int compWinCnt = 0;
        int userWinCnt = 0;
        int tie = 0;

        //generating a loop for repeating process for 10 times
        for(int cnt = 0; cnt < 10; cnt++){

            compDie = (int)(Math.random()*5);
            userDie = (int)(Math.random()*5);

            //if statement if the computer won the point
            if (compDie > userDie)
                compWinCnt++;
            //if statement if the user won the point
            else if (compDie < userDie)
                userWinCnt++;
            //if statement if this point was a tie
            else if (compDie == userDie)
                tie++;

        }

        //display the output
        System.out.printf("Computer ..... %d",compWinCnt);
        System.out.printf("\nUser ......... %d",userWinCnt);
        System.out.printf("\nTie .......... %d",tie);

        //if statement for computer win
        if(compWinCnt > userWinCnt)
            System.out.printf("\nThe computer is the grand winner.");
        //if statement for user win
        else if (userWinCnt > compWinCnt)
            System.out.printf("\nUser is the grand winner.");
        //if statement for a tie game
        else if (userWinCnt == compWinCnt)
            System.out.printf("\nThere is no winner, the game ends in tie.");
    }
}
/* Test 1
Computer ..... 6
User ......... 3
Tie .......... 1
The computer is the grand winner.
Process finished with exit code 0

*/

/* Test 2
Computer ..... 7
User ......... 3
Tie .......... 0
The computer is the grand winner.
Process finished with exit code 0

*/

/* Test 3
Computer ..... 3
User ......... 5
Tie .......... 2
User is the grand winner.
Process finished with exit code 0

*/