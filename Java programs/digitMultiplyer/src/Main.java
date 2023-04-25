/*****************************************************************************
 * AUTHORS      : Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW1          : Multiply a digits in an integer
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 6/27/21
 ******************************************************************************/
import java.util.Scanner;
/*****************************************************************************
 *	 Multiplying digits program
 * ___________________________________________________________________________
 *  This program prompts the user and asks for a number between 0 and 1000,
 *  then the program exctracts each digits of the number and calculates the
 *  product of all the digits of that number and returns it in an statement
 *  as an outpu
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	input : number that is designed for user input
 *
 *	 OUTPUT:
 *	 	prdct : product of the digits of the user input number
 *****************************************************************************/
public class Main {
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in); //Creates a new scanner project

        //prompts the user to enter a number between 0 and 1000
        System.out.println("Enter a number between 0 and 1000: ");
        int num = input.nextInt();

        //declare product variable
        int prdct = 1;
        int temp = num;

        //Using a loop, we extract each digit until temp becomes zero
        while(temp > 0){
            int dig = temp % 10;    //extracts the last digit

            prdct *= dig;           //multiply that to the product of the digits
                                    //collected so far

            temp /= 10;             //removes the last digit from the number
        }

        //Display the output
        System.out.printf("The product of the digits of number %d is %d ",num,prdct);
    }
}


/* Test 1

Enter a number between 0 and 1000:
932
The product of the digits of number 932 is 54
Process finished with exit code 0
*/

/* Test 2

Enter a number between 0 and 1000:
999
The product of the digits of number 999 is 729
Process finished with exit code 0
*/

/* Test 3

Enter a number between 0 and 1000:
420
The product of the digits of number 420 is 0
Process finished with exit code 0
*/