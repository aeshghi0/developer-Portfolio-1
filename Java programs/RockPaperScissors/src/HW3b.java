/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW3b         : Rock-Paper-Scissors game
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 7/4/21
 ******************************************************************************/
import java.util.Scanner;

/*****************************************************************************
 *	 Rock-Paper-Scissors game
 * ___________________________________________________________________________
 *
 * 	 This Program prompts the user to enter an entry for the choice between
 * 	 Rock, paper or scissors with an integer, and a random number generator
 * 	 generates a choice for the computer play and the programs computes who
 * 	 won that round. whichever player gets more than two wins in a row, they
 * 	 will automatically win the game
 * ___________________________________________________________________________
 *	 INPUT :
 *	 userPlay : player choice for the game
 *
 *	 OUTPUT:
 *	 	displays who won the game
 *****************************************************************************/

public class HW3b {
    public static void main(String[] args){

        //new scanner project for the input
        Scanner input = new Scanner(System.in);

        //declaring variables
        int compPoint = 0;
        int userPoint = 0;
        int userPlay = 0;
        int compPlay = 0;

        //loop keeps the game going on until someone wins more than two times
        while(compPoint < 3 && userPoint < 3){

            //prompts the user for the play
            System.out.println("Scissors(0),Rock(1),Paper(2): ");
            userPlay = input.nextInt();

            //random number generator gives a number for the computer play
            compPlay = (int)(Math.random()*2);

            //if player for draw stamement
            if (userPlay == compPlay){
                System.out.println("It is a draw \n");
            }

            //displayes the game results and resets  the point if needed
            else if(compPlay == 0 && userPlay == 1){
                userPoint++;
                compPoint = 0;
                System.out.println("You won \n");
            }

            else if(compPlay == 0 && userPlay == 2){
                compPoint++;
                userPoint = 0;
                System.out.println("Computer won \n");
            }

            else if(compPlay == 1 && userPlay == 0){
                compPoint++;
                userPoint = 0;
                System.out.println("Computer won \n");
            }

            else if(compPlay == 1 && userPlay == 2){
                userPoint++;
                compPoint = 0;
                System.out.println("You won \n");
            }

            else if(compPlay == 2 && userPlay == 0){
                userPoint++;
                compPoint = 0;
                System.out.println("You won \n");
            }

            else if(compPlay == 2 && userPlay == 1){
                compPoint++;
                userPoint = 0;
                System.out.println("Computer won\n");
            }

        }

        //if statement for displaying the outpu ( who won )
        if ( userPoint > 2){
            System.out.println("You won more than two times");
        }

        else if ( compPoint > 2){
            System.out.println("Computer won more than two times");
        }
    }
}
/* Test 1
Scissors(0),Rock(1),Paper(2):
0
It is a draw
Scissors(0),Rock(1),Paper(2):
1
It is a draw
Scissors(0),Rock(1),Paper(2):
2
You won
Scissors(0),Rock(1),Paper(2):
1
It is a draw
Scissors(0),Rock(1),Paper(2):
2
Computer won
Scissors(0),Rock(1),Paper(2):
1
It is a draw
Scissors(0),Rock(1),Paper(2):
0
Computer won
Scissors(0),Rock(1),Paper(2):
2
You won
Scissors(0),Rock(1),Paper(2):
1
You won
Scissors(0),Rock(1),Paper(2):
2
Computer won
Scissors(0),Rock(1),Paper(2):
0
It is a draw
Scissors(0),Rock(1),Paper(2):
2
You won
Scissors(0),Rock(1),Paper(2):
1
It is a draw
Scissors(0),Rock(1),Paper(2):
0
Computer won
Scissors(0),Rock(1),Paper(2):
2
You won
Scissors(0),Rock(1),Paper(2):
1
You won
Scissors(0),Rock(1),Paper(2):
1
You won
You won more than two times
Process finished with exit code 0
*/


/*Test 2
Scissors(0),Rock(1),Paper(2):
0
It is a draw
Scissors(0),Rock(1),Paper(2):
1
It is a draw
Scissors(0),Rock(1),Paper(2):
2
You won
Scissors(0),Rock(1),Paper(2):
1
It is a draw
Scissors(0),Rock(1),Paper(2):
2
Computer won
Scissors(0),Rock(1),Paper(2):
1
It is a draw
Scissors(0),Rock(1),Paper(2):
0
It is a draw
Scissors(0),Rock(1),Paper(2):
2
You won
Scissors(0),Rock(1),Paper(2):
1
It is a draw
Scissors(0),Rock(1),Paper(2):
2
You won
Scissors(0),Rock(1),Paper(2):
0
It is a draw
Scissors(0),Rock(1),Paper(2):
2
Computer won
Scissors(0),Rock(1),Paper(2):
1
It is a draw
Scissors(0),Rock(1),Paper(2):
2
Computer won
Scissors(0),Rock(1),Paper(2):
0
It is a draw
Scissors(0),Rock(1),Paper(2):
2
Computer won
Computer won more than two times
Process finished with exit code 0
*/