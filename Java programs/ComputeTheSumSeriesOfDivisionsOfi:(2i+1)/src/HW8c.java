/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW8c         : Compute sum series of the given number
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 08/10/21
 ******************************************************************************/

/*****************************************************************************
 *	 Compute the sum series of divisions of i / (2i + 1)
 * ___________________________________________________________________________
 *
 * 	 This Program computes and outputs the division i / (2i +1) until the given
 * 	 number using the sumSeries recursive method
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	N/A
 *
 *	 OUTPUT:
 *	 	sum series of the numbers
 *****************************************************************************/
public class HW8c {

    //Method sumSeries - returns double
    //computes the sum of the of i / (2i + 1)
    //using the recursive method
    private static double sumSeries(double i){

        //if statement for base case returns 0
        if(i == 0)
            return 0;

            //else statement calls the recursive method to calculate the sum
        else
            return i/(2*i + 1) + sumSeries(i-1);
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
1    0.333
2    0.733
3    1.162
4    1.606
5    2.061
6    2.522
7    2.989
8    3.460
9    3.933
10    4.410

* */