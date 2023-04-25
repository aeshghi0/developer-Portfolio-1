/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * LAB2         : Proper fraction, improper fraction, and mixed fraction
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 6/27/21
 ******************************************************************************/
import java.util.Scanner;
/*****************************************************************************
 *	 Proper fraction, improper fraction, and mixed fraction
 * ___________________________________________________________________________
 *
 * 	 This Program prompts the user to enter a numerator and a denominator,
 * 	 and then the program uses the selection to decide if the fraction is
 * 	 proper, improper, or mixed fraction and display the output as a proper
 * 	 fraction or a proper fraction with a whole number.
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	num   : numerator
 *	    denom : denominator
 *
 *	 OUTPUT:
 *	 	proper fraction and the whole number
 *****************************************************************************/
public class Lab2 {
    public static void main(String[] args)
    {
        // creaes a new scanner project
        Scanner input = new Scanner(System.in);

        int num = 0;
        int temp = 0;
        int denom = 0;
        int exe = 0;

        //prompts the user for the numerator
        System.out.print("Enter a numerator: ");
        num = input.nextInt();
        temp = num;

        //prompts the user for the denominator
        System.out.print("Enter a denominator: ");
        denom = input.nextInt();

        //if statement for a smaller than 1 fraction (proper fraction)
        if(num <= denom)
        {
            System.out.println(num + "/" + denom + " is a proper fraction.");
        }

        //If statement going through for a bigger than 1 fraction ( improper fractio)
        else
        {
            //Computing the fraction to a proper fraction and/or a whole number
            exe =  num / denom;
            num = num % denom;

            //display the output
            //if statement if the fraction can be reduced to a whole number
            if(num == 0)
            {
                System.out.printf("%d/%d is a improper fraction and it can be reduced to. %d",temp,denom,exe);
            }

            //else statement for if the fraction was a mixed fraction with a whole number
            else
            {
                System.out.printf("%d/%d is a improper fraction and it can be reduced  to %d",temp,denom, exe);
                System.out.printf(" + %d/%d.",num,denom);
            }

        }

        input.close();
    }
}

/* Test 1
Enter a numerator: 16
Enter a denominator: 3
16/3 is a improper fraction and it can be reduced  to 5 + 1/3.
Process finished with exit code 0
*/

/* Test 2
Enter a numerator: 6
Enter a denominator: 7
6/7 is a proper fraction.

Process finished with exit code 0
*/

/* Test 3
Enter a numerator: 6
Enter a denominator: 2
6/2 is a improper fraction and it can be reduced to. 3
Process finished with exit code 0
*/