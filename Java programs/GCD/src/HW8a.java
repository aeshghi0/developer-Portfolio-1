/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW8a         : Compute greatest common divisor
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 08/10/21
 ******************************************************************************/
import java.util.Scanner;
/*****************************************************************************
 *	 Compute the greatest common divisor between two integers
 * ___________________________________________________________________________
 *
 * 	 This Program prompts the user to input two integers and then compute the
 * 	 greatest common divisor using the recursion method
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	num1
 *	    num2
 *
 *	 OUTPUT:
 *	 	gcd
 *****************************************************************************/
public class HW8a {

    //Method - returns integer
    //This method gets two integers as input and using recursion
    //computes the greatest common divisor and returns that as
    //an integer
    private static int calculateGcd(int n1, int n2){

        //if statement to return number2 if divisible by number1
        if( n1%n2 == 0)
            return n2;

        //else statement to call the method itself (recursion)
        else
            return calculateGcd(n2, n1%n2);
    }


    public static void main(String[] args){

        //variables to save values
        int num1;
        int num2;
        int gcd;

        //creates a new scanner project
        Scanner in = new Scanner(System.in);

        //prompts the user for the first number
        System.out.print("Enter the first number: ");
        num1= in.nextInt();

        //primpts the user for the second number
        System.out.print("Enter the second number: ");
        num2 = in.nextInt();

        //calls the calculateGcd method to calculate the GCD using recursion
        gcd = calculateGcd(num1, num2);

        //displays the output
        System.out.println("The GCD of " + num1 + " and "+ num2+" is " + gcd);

    }
}

/* Test 1

Enter the first number: 12
Enter the second number: 5
The GCD of 12 and 5 is 1

Process finished with exit code 0

*/

/* Test 2

Enter the first number: 4
Enter the second number: 20
The GCD of 4 and 20 is 4

Process finished with exit code 0

*/