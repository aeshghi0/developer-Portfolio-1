/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW1b         : Financial application : compound value
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 6/27/21
 ******************************************************************************/
import java.util.Scanner;

/*****************************************************************************
 *	 Financial application : compound value program
 * ___________________________________________________________________________
 *
 * 	 This Program prompts the user to enter a monthly savings amount and
 * 	 compute the money plus the interest rate of %3.75 annually, and gives out
 * 	 the users money amount after each month for the next six month
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	money : amount of monthly savings (user input)
 *
 *	 OUTPUT:
 *	 	displays the users money after six month for each month
 *****************************************************************************/

public class Main {
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in); //creates a new scanner project

        //prompts the user to input a monthly saving amount
        System.out.print("Enter the monthly savings amount: ");
        double money = input.nextDouble();

        //calculates the money after the first month
        double firstMonth = money * (1 + 0.003125);

        //calculates the money after the second month
        double secondMonth = (money + firstMonth) * (1 + 0.003125);

        //calculates the money after the third month
        double thirdMonth = (money + secondMonth) * (1 + 0.003125);

        //calculate the money after the forth month
        double forthMonth = (money + thirdMonth) * (1 + 0.003125);

        //calculate the money after the fifth month
        double fifthMonth = (money + forthMonth) * (1 + 0.003125);

        //calculates the money after the sixth month
        double sixthMonth = (money + fifthMonth) * (1 + 0.003125);

        //display the output
        System.out.printf("The money after the first month becomes  : $%f", firstMonth);
        System.out.printf("\nThe money after the second month becomes : $%f ", secondMonth);
        System.out.printf("\nThe money after the third month becomes  : $%f ", thirdMonth);
        System.out.printf("\nThe money after the forth month becomes  : $%f ", forthMonth);
        System.out.printf("\nThe money after the fifth month becomes  : $%f ", fifthMonth);
        System.out.printf("\nThe money after the sixth month becomes  : $%f ", sixthMonth);
    }
}

/* Test 1

Enter the monthly savings amount: 100
The money after the first month becomes  : $100.312500
The money after the second month becomes : $200.938477
The money after the third month becomes  : $301.878909
The money after the forth month becomes  : $403.134781
The money after the fifth month becomes  : $504.707077
The money after the sixth month becomes  : $606.596787
Process finished with exit code 0

*/

/* Test 2

Enter the monthly savings amount: 200
The money after the first month becomes  : $200.625000
The money after the second month becomes : $401.876953
The money after the third month becomes  : $603.757819
The money after the forth month becomes  : $806.269562
The money after the fifth month becomes  : $1009.414154
The money after the sixth month becomes  : $1213.193573
Process finished with exit code 0
*/

/* Test 3

Enter the monthly savings amount: 1
The money after the first month becomes  : $1.003125
The money after the second month becomes : $2.009385
The money after the third month becomes  : $3.018789
The money after the forth month becomes  : $4.031348
The money after the fifth month becomes  : $5.047071
The money after the sixth month becomes  : $6.065968
Process finished with exit code 0

*/