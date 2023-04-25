/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW2a         : Picking a Card
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 6/27/21
 ******************************************************************************/
import java.util.Scanner;
/*****************************************************************************
 *	 Picking a card
 * ___________________________________________________________________________
 *
 * 	 This Program prompts the user that if the user wants to play cards,
 * 	 and if the user prefers toplay cards and orders the computer to do so,
 * 	 the computer draws a random card for the user.
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	opt : option to enter into the game or no
 *
 *	 OUTPUT:
 *	 	the random card displays on the screen
 *****************************************************************************/

public class Main {
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in); //creates a new scanner

        int cardNum = (int)(Math.random()*51);  //generates a random number between 0 and 51

        //prompts the user if they want to play card game
        System.out.print("Do you want to play cards? Enter 1 for yes 2 for no: ");
        int opt = input.nextInt();

        //response in case the user doesn't want to play
        if(opt == 2){
            System.out.print("Okay, I understand, Have a nice day");
        }

        //response for a wrong input
        else if(opt > 2 || opt < 1){
            System.out.print("You did not enter the right response !");
        }

        //generates the program in case the user wants to play
        else if(opt == 1){

            System.out.println("Here is the card you picked\n");
            //program is going through the if/then statement for the spades
            if (cardNum == 0)
                System.out.println("Ace of Spades");
            else if (cardNum <=9)
                System.out.println((cardNum + 1) + " of Spades.");
            else if (cardNum == 10)
                System.out.println("Jack of Spades");
            else if (cardNum == 11)
                System.out.println("Queen of Spades");
            else if (cardNum == 12)
                System.out.println("King of Spades");

            //program is going through the if/then statements for the hearts
            else if (cardNum == 13)
                System.out.println("Ace of Hearts");
            else if (cardNum <=22)
                System.out.println((cardNum % 13 + 1) + " of Hearts");
            else if (cardNum == 23)
                System.out.println("Jack of Hearts");
            else if (cardNum == 24)
                System.out.println("Queen of Hearts");
            else if (cardNum == 25)
                System.out.println("King of Hearts");

            //program is going through the if/then statements for the diamonds
            else if (cardNum == 26)
                System.out.println("Ace of Diamonds");
            else if (cardNum <=35)
                System.out.println((cardNum % 13 + 1) + " of Diamonds");
            else if (cardNum == 36)
                System.out.println("Jack of Diamonds");
            else if (cardNum == 37)
                System.out.println("Queen of Diamonds");
            else if (cardNum == 38)
                System.out.println("King of Diamonds");

            //program is going through the if/then statements for the clubs
            else if (cardNum == 39)
                System.out.println("Ace of Clubs");
            else if (cardNum <=48)
                System.out.println((cardNum % 13 + 1) + " of Clubs");
            else if (cardNum == 49)
                System.out.println("Jack of Clubs");
            else if (cardNum == 50)
                System.out.println("Queen of Clubs");
            else if (cardNum == 51)
                System.out.println("King of Clubs");
        }

    }
}
/* Test 1

Do you want to play cards? Enter 1 for yes 2 for no: 2
Okay, I understand, Have a nice day
Process finished with exit code 0

* */

/* Test 2

Do you want to play cards? Enter 1 for yes 2 for no: 3
You did not enter the right response !
Process finished with exit code 0

* */

/* Test 3

Do you want to play cards? Enter 1 for yes 2 for no: 1
Here is the card you picked

8 of Spades.

Process finished with exit code 0

* */

/* Test 4

Do you want to play cards? Enter 1 for yes 2 for no: 1
Here is the card you picked

Jack of Diamonds

Process finished with exit code 0

* */

/* Test 5

Do you want to play cards? Enter 1 for yes 2 for no: -2
You did not enter the right response !
Process finished with exit code 0

* */