/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * LAB 10       : Cost of driving
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 6/27/21
 ******************************************************************************/
import java.util.Scanner;

/*****************************************************************************
 *	 Cost of driving program
 * ___________________________________________________________________________
 *
 * 	 This program prompts the user and asks for the miles between you and the
 * 	 destination, then asks for the miles per gallon usage of the car, and
 * 	 also the price per gallon of gas, then the program computes and outputs
 * 	 the gas price of the trip
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	miles		:	the distance to destination in miles
 *	 	mpg         :	miles per gallon use of the car
 *	 	price		:	price of each gallon of gas
 *
 *	 OUTPUT:
 *	 	price       : Price of the gas for this trip
 *****************************************************************************/
public class Main {
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in); //creates a new scanner project

        //prompts the user for the distance in miles
        System.out.print("Enter the driving distance: ");
        double miles = input.nextDouble();

        //prompts the user for mpg usage of the vehicle
        System.out.print("Enter miles per gallon: ");
        double mpg = input.nextDouble();

        //prompts the user for the price of one gallon of gas
        System.out.print("Enter price per gallon: ");
        double price = input.nextDouble();

        //computes and calculates the cost of driving
        double cost = (miles / mpg) * price;

        //display output
        System.out.printf("The cost of driving is $%.2f",cost);
    }
}
/* Test 1

Enter the driving distance: 900.5
Enter miles per gallon: 25.5
Enter price per gallon: 3.55
The cost of driving is $125.36
Process finished with exit code 0

*/

/* Test 2

Enter the driving distance: 400
Enter miles per gallon: 20
Enter price per gallon: 4
The cost of driving is $80.00
Process finished with exit code 0
*/