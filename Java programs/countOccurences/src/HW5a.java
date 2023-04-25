/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW5a         : Count the occurrences of digits
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 7/11/21
 ******************************************************************************/
import java.util.Scanner;

/*****************************************************************************
 *	 Count the occurrences of digits
 * ___________________________________________________________________________
 *
 * 	 this program prompts the user to input a string. after that the program
 * 	 computes if the string input by the user was containing any number and if
 * 	 it does, how many times that number has been repeated in the string
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	input : string input by the user
 *
 *	 OUTPUT:
 *	 	int[] counts : array of counts tha contains how many times a digit has
 *	                   been repeated in the string
 *****************************************************************************/
public class HW5a {
    public static void main(String[] args){

        //creates a new scanner project for reading the input
        Scanner in = new Scanner(System.in);

        //prompts the user to type a string
        System.out.println("Enter a string: ");
        String input = in.nextLine();

        //creates a new array of integers and initialize it by calling the count method
        int[] counts = count(input);

        //for loop going through displaying the digits occurrences in the string
        for(int i=0; i<counts.length; i++){

            //if statement making sure the digits displaying, have been appeared in the string at least one time
            if(counts[i] != 0)
                System.out.printf("Digit %d occurs %d times \n",i,counts[i]);
        }
    }



    //Method - count ( return int[] )
    //this method gets the input string by the user and it determines if each character of that
    //string is a digit or no, and if it is a digit, it adds how many times that digit has been appeared in the
    //string and adds that number to the array of integers
    public static int[] count(String s){

        // array of integers containing how many times a digit from 0-9 has been appeared
        int[] countsArr = new int[10];

        //for loop going through each character of the string
        for(int i=0; i < s.length(); i++){

            //if statement for determining if the character of the string is a number or no
            if(Character.isDigit(s.charAt(i)))
                countsArr[s.charAt(i)-'0']++;
        }

        //returns the  array of digit occurrences
        return countsArr;
    }
}

/* Test 1

Enter a string:
23231adbc1234
Digit 1 occurs 2 times
Digit 2 occurs 3 times
Digit 3 occurs 3 times
Digit 4 occurs 1 times

Process finished with exit code 0
* */

/* Test 2

Enter a string:
417rbco4769210bc0o48
Digit 0 occurs 2 times
Digit 1 occurs 2 times
Digit 2 occurs 1 times
Digit 4 occurs 3 times
Digit 6 occurs 1 times
Digit 7 occurs 2 times
Digit 8 occurs 1 times
Digit 9 occurs 1 times

Process finished with exit code 0
* */