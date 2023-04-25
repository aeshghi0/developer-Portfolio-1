/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW8d         : Display the reverse of an integer
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 08/10/21
 ******************************************************************************/
import java.util.Scanner;
/*****************************************************************************
 *	 Display reverse of an integer
 * ___________________________________________________________________________
 *
 * 	 This Program prompts the user to input an integer and using a recursive
 * 	 method it will display the reverse of that integer
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	num
 *
 *	 OUTPUT:
 *	 	reverse of num
 *****************************************************************************/
public class HW8d {

    //Method reverseDisplay - returns nothing (void type)
    //using the remainder function and division of 10 in calling the
    //recursive method, it separates the last digit from the
    //integer and displays it as an output
    public static void reverseDisplay(int n){

        //if statement for the base case to show the number less than 10
        if(n < 10)
            System.out.println(n);

        //else statement that calls the recursive method
        else{
            System.out.print(n % 10);
            reverseDisplay(n / 10);
        }
    }


    public static void main(String[] args){

        //variable
        int num;

        //new scanner projects
        Scanner in = new Scanner(System.in);

        //prompts the user to input an integer
        System.out.print("Enter an integer: ");
        num = in.nextInt();

        //displays the output
        System.out.print("The reversal of" + num + " is ");
        reverseDisplay(num);

    }
}

/* Test 1
Enter an integer: 65437
The reversal of65437 is 73456

Process finished with exit code 0
* */

/* Test 2
Enter an integer: 851245
The reversal of851245 is 542158

Process finished with exit code 0

* */