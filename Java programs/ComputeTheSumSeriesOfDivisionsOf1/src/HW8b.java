/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW8b         : Compute sum series of the given number
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 08/10/21
 ******************************************************************************/

/*****************************************************************************
 *	 Compute the sum series of divisions of 1
 * ___________________________________________________________________________
 *
 * 	 This Program computes and outputs the division of 1 until the given
 * 	 number using the sumSeries recursive method
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	N/A
 *
 *	 OUTPUT:
 *	 	sum series of the numbers
 *****************************************************************************/
public class HW8b {

    //Method sumSeries - returns double
    //computes the sum of the series of divisions by 1
    //using the recursive method
    private static double sumSeries(double i){

        //if statement for base case returns 0
        if(i == 0)
            return 0;

        //else statement calls the recursive method to calculate the sum
        else
            return (1/i) + sumSeries(i-1);
    }

    public static void main(String[] args){

        //Displays the output
        System.out.println("i   m(i)");
        System.out.println("---------");

        //runs sum method for the numbers between 1 and 10
        for(int i =1; i < 11; i++){

            //displays the outfit
            System.out.printf("%d%9.3f\n",i,sumSeries(i));
        }
    }
}

/* Test 1

i   m(i)
---------
1    1.000
2    1.500
3    1.833
4    2.083
5    2.283
6    2.450
7    2.593
8    2.718
9    2.829
10    2.929

Process finished with exit code 0

*/