/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW4          : Color game
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 7/11/21
 ******************************************************************************/
import java.util.Scanner;
/*****************************************************************************
 *	 Color game
 * ___________________________________________________________________________
 *
 * 	 This program prompts the user to guess a name of a color in the middle of
 * 	 a five-color list. the program then uses the random number generator to
 * 	 randomly chooses between the color itself, and then compares the two
 * 	 choices. after repeating the same process ten times, then the program
 * 	 gives out to us how many of the guesses made were right.
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	userColor : user choice of color
 *
 *	 OUTPUT:
 *	 	displays each round what did computer choose
 *	    colorCallCount: how many of the user's guesses were right
 *****************************************************************************/
public class HW4 {

    public static void main(String[] args){

        //Variables

        int colorCallCount = 0; // int - keeps track of the correct guesses
        String userColor;       // string - user choice of color
        String compColor;       // string - computer choice of color


        //generating a for loop to repeat the process ten times
        for(int i =0; i < 10; i++){

            //uses metho compChoice to determine the computer choice
            compColor = compChoice().toUpperCase();

            //uses the method to prompts the user for a valid response for input
            userColor = userChoice().toUpperCase();

            //displays what was the computer's choice
            System.out.printf("Computer says: I chose %s\n",compColor);

            //if statement for if it was a correct guess
            if(compColor.equals(userColor)){
                colorCallCount++;
            }
        }

        //displays the number of correct guesses
        System.out.printf("Number of correct guesses: %d",colorCallCount);

    }



    //Method - userChoice ( return String )
    //This method prompts the user for an input of a color between the 5-colors prompted to the user,
    //then using a do-while loop it makes sure user input for the color is valid and compatible with the
    //program
    public static String userChoice(){

        //new scanner project for input from the user
        Scanner input = new Scanner(System.in);

        //prompts the user to choose between five colors
        System.out.println("I'm thinking of a color.\nIs it red, green, blue, orange, or yellow? ");
        String choice = input.nextLine();

        //variable type boolean, uses the method isValidChoice, saves if the users answer was valid or no
        boolean valid = isValidChoice(choice);

        //do-while loop, making sure that the input answer from the user is valid
        do{

            //if statement going through if the user input an invalid answer
            if(!valid){

                //prompts the user, if the program determines the input was invalid
                System.out.println("Please enter red, blue, green, orange, or yellow. Enter again:");
                choice = input.nextLine();
            }

            //uses the isValidChoice to determine if the user replacement input choice is valid
            valid = isValidChoice(choice);

        }while(!valid); //condition of the do-while loop : while the input is invalid

        //returns the valid choice
        return choice;
    }



    //Method - isvalidChoice ( return boolean )
    //this method uses the user input choice as a refrence and then using a if statement decides if the user input
    //(passed to this method) is a valid input compatible for this program or no. and then returns a boolean statement
    //as the answer to its caller
    public static boolean isValidChoice(String choice){

        // turns every letter of the input to an upper case letter
        choice = choice.toUpperCase();

        //if statement checking the user input matches the valid input criteria and returns true if it is true
        if (choice.equals("RED") || choice.equals("GREEN") || choice.equals("BLUE") || choice.equals("ORANGE")
         || choice.equals("YELLOW")){
            return true;
        }

        //returns false if the  if statemet fails to pass.
        return false;
    }


    //Method - compChoice ( returns string )
    //this method uses the math random number generator to get a random number between 0 - 4, which each
    //number is assigned to a  choice
    public static String compChoice(){

        //variable to store the choice as string
        String choice;

        //integer that uses the random number generator to assign a number
        int rnd = (int)(Math.random()* 4);

        //switch statement that determines the computer choice based on the random number
        switch(rnd) {
            case 0: choice = "RED"; break;
            case 1: choice = "GREEN"; break;
            case 2: choice = "BLUE"; break;
            case 3: choice = "ORANGE"; break;
            case 4: choice = "YELLOW"; break;
            default:choice = "RED";
        }

        //returns the computer choice to the caller
        return choice;
    }
}

/* Test 1

I'm thinking of a color.
Is it red, green, blue, orange, or yellow?
red
Computer says: I chose BLUE
I'm thinking of a color.
Is it red, green, blue, orange, or yellow?
green
Computer says: I chose RED
I'm thinking of a color.
Is it red, green, blue, orange, or yellow?
blue
Computer says: I chose GREEN
I'm thinking of a color.
Is it red, green, blue, orange, or yellow?
orange
Computer says: I chose ORANGE
I'm thinking of a color.
Is it red, green, blue, orange, or yellow?
yellow
Computer says: I chose GREEN
I'm thinking of a color.
Is it red, green, blue, orange, or yellow?
orange
Computer says: I chose ORANGE
I'm thinking of a color.
Is it red, green, blue, orange, or yellow?
blue
Computer says: I chose ORANGE
I'm thinking of a color.
Is it red, green, blue, orange, or yellow?
green
Computer says: I chose GREEN
I'm thinking of a color.
Is it red, green, blue, orange, or yellow?
red
Computer says: I chose BLUE
I'm thinking of a color.
Is it red, green, blue, orange, or yellow?
green
Computer says: I chose RED
Number of correct guesses: 3
Process finished with exit code 0

* */

/* Test 2

I'm thinking of a color.
Is it red, green, blue, orange, or yellow?
dad
Please enter red, blue, green, orange, or yellow. Enter again:
rd
Please enter red, blue, green, orange, or yellow. Enter again:

Process finished with exit code 130 (interrupted by signal 2: SIGINT)
* */