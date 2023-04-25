/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW8e         : Count the number of uppercase letters in an array
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 08/10/21
 ******************************************************************************/
import java.util.Scanner;
/*****************************************************************************
 *	 Find the number of uppercase letters in an array
 * ___________________________________________________________________________
 *
 * 	 This Program prompts the user a string and then after turning it into an
 * 	 array of characters, we will use a recursive method to count the number of
 * 	 uppercase letters in the array
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	string
 *
 *	 OUTPUT:
 *	 	upperCount
 *****************************************************************************/
public class HW8e {

    //Method count - returns an integer
    //the recursive method used to check each character in the
    //array and add that to the count if that was an uppercase letter
    public static int count(char[] chars, int high){

        //variable
        int count =0;

        //increment count if uppercase letter
        count = Character.isUpperCase(chars[high]) ? 1: 0;

        //if statement returns zero if there was no uppercase
        if(high ==0)
            return count;

        //else statement adds count to the recursive call of the method
        else
            return count + count(chars, high -1);
    }

    //Method count - returns int
    //calls out the recursive method
    public static int count(char[] chars){

        return count(chars, chars.length -1);
    }


    public static void main(String[] args){

        //variables
        String string;
        int upperCount;

        //new scanner project
        Scanner in = new Scanner(System.in);

        //prompts the user to enter a string
        System.out.print("Enter a string: ");
        string = in.nextLine();

        //stores the value of the uppercase letters count in a variable by calling the count method
        upperCount = count(string.toCharArray());

        //displays the output
        System.out.println("The number of uppercase letters is " + upperCount);

    }
}

/* Test 1

Enter a string: I am No Good
The number of uppercase letters is 3

Process finished with exit code 0

* */