/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * LAB3         : Displaying seconds
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 7/6/21
 ******************************************************************************/
import java.util.Scanner;
/*****************************************************************************
 *	 Displaying the time
 * ___________________________________________________________________________
 *
 * 	 This Program prompts the user to enter a time in second and then the
 * 	 program will display how much time is left after each second
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	time : number of seconds
 *
 *	 OUTPUT:
 *	 	displays the time remaining
 *****************************************************************************/
public class Lab3 {
    public static void main(String[] args){

        //creates a new scanner project for the input
        Scanner input = new Scanner(System.in);

        //prompts the user to enter the time
        System.out.println("Enter the number of second: ");
        int time = input.nextInt();

        //for loop going through displaying each second as the time passes
        for(int i = time; i > 0; i--){

            //displays the time remaining
            System.out.printf("\n%d seconds remaining",i);

        }

        //displays when the time runs out
        System.out.println("\nStopped!");
    }
}

/* Test 1
Enter the number of second:
3

3 seconds remaining
2 seconds remaining
1 seconds remaining
Stopped!

Process finished with exit code 0
*/

/* Test 2
Enter the number of second:
5

5 seconds remaining
4 seconds remaining
3 seconds remaining
2 seconds remaining
1 seconds remaining
Stopped!

Process finished with exit code 0

*/