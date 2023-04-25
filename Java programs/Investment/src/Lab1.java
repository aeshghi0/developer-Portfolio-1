/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * LAB1         : calculating future investment
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 6/27/21
 ******************************************************************************/

import java.util.Scanner;
/*****************************************************************************
 *	 calculating future investment value
 * ___________________________________________________________________________
 *
 * 	 This Program prompts the user to enter a investment amount, annual
 * 	 interest rate, and number of years of investment, and computes and
 * 	 displays the future money after that number of years
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	money : amount of money invested
 *	    anRate: annual interest rate
 *	    years : number of years trying to invest
 *
 *	 OUTPUT:
 *	 	displays the users money after the number of years
 *****************************************************************************/
public class Lab1 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in); //creates a new scanner project

        //prompts the user to input a monthly saving amount
        System.out.print("Enter the investment amount, for example 120000.95: ");
        double money = input.nextDouble();


        //prompts the user to input annual interest rate
        System.out.print("Enter the annual interest rate, for example 8.25: ");
        double anRate = input.nextDouble();

        //prompts the user to input a monthly saving amount
        System.out.print("Enter number of years as an integer, for example 5: ");
        int years = input.nextInt();

        //computing the monthly interest rate
        double monRate = anRate/1200;

        //computing the interest profit
        double profit = Math.pow((1+ monRate),(years*12));

        //calculating the future money
        double futureValue = money * profit;

        //display the output
        System.out.printf("Future value is: $%.2f", futureValue);
    }
}
/* Test 1
Enter the investment amount, for example 120000.95: 1000
Enter the annual interest rate, for example 8.25: 3.25
Enter number of years as an integer, for example 5: 1
Future value is: $1032.99
Process finished with exit code 0
*/

/* Test 2
Enter the investment amount, for example 120000.95: 1000
Enter the annual interest rate, for example 8.25: 4.25
Enter number of years as an integer, for example 5: 1
Future value is: $1043.34
Process finished with exit code 0
*/

/* Test 3
Enter the investment amount, for example 120000.95: 12956.32
Enter the annual interest rate, for example 8.25: 5.25
Enter number of years as an integer, for example 5: 3
Future value is: $15161.21
Process finished with exit code 0
*/