/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW8f         : calculate the cube of integers
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 08/10/21
 ******************************************************************************/
import java.util.Scanner;
/*****************************************************************************
 *	 calculate cube of six integers
 * ___________________________________________________________________________
 *
 * 	 This Program prompts the user to input six integers and using
 * 	 method call, it will calculate the cube of the six integers and output as
 * 	 an array
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	list[]
 *
 *	 OUTPUT:
 *	 	cube of integers as an array
 *****************************************************************************/
public class HW8f {

    //Method cube - returns nothing (void type)
    //This method will go over each six digits entered by the user and
    //using another method, it will calculate and add the cube of each integer
    //to an array
    public static void cube(int[] list){

        //variable
        int x = 0;

        //for loop going through each element of the array
        for(int i=0; i < 6; i++){
            x = list[i];
            list[i] = cube(x);
        }
    }

    //Method cube - returns an integer
    //this method returns the cube of each element of array
    public static int cube(int x){
        return x*x*x;
    }


    public static void main(String[] args){

        //creates a new scanner project
        Scanner in = new Scanner(System.in);

        //creates a new array of integers
        int[] list = new int[6];

        //prompts the user to enter six integers
        System.out.print("Enter six integers: ");

        //for loop to get all the integers and put them in the array
        for(int i=0; i < 6; i++)
            list[i] = in.nextInt();

        //calling the cube method using the array we just made
        cube(list);

        //displays the output as an array
        System.out.print(java.util.Arrays.toString(list));
    }
}

/* Test 1
Enter six integers: 1 2 3 4 5 6
[1, 8, 27, 64, 125, 216]
Process finished with exit code 0
* */

/*
Enter six integers: 22 4 7 8 69 6
[10648, 64, 343, 512, 328509, 216]
Process finished with exit code 0
* */