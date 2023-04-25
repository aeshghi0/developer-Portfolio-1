/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW#6         : Inverse of the matrix
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 7/18/21
 ******************************************************************************/
import java.util.Scanner;
/*****************************************************************************
 *	 Inverse of a matrix
 * ___________________________________________________________________________
 *
 * 	 This program prompts the user to enter four double type number into the
 * 	 system, as each element of a 2*2 matrix. then the program uses the
 * 	 the formula:
 * 	 Inverse[][] = 1 / ( ad - bc )[[d -b][-c a]
 * 	 to find the inverse of the matrix
 * 	 note that if the determiner of (ad - bc) becomes zero, there is no
 * 	 inverse solution for the matrix entered by the user
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	a : first element
 *	    b : second element
 *	    c : third element
 *	    d : forth element
 *
 *	 OUTPUT:
 *	 	matrix[][] : the inverse version of the matrix input by user
 *****************************************************************************/
public class HW6 {
    public static void main(String[] args){

        //new scanner project to read the input from the keyboard
        Scanner in = new Scanner(System.in);

        //prompts the user to enter the variables of the elements of the matrix
        System.out.println("Enter a, b, c, d: ");
        double a = in.nextDouble();
        double b = in.nextDouble();
        double c = in.nextDouble();
        double d = in.nextDouble();

        //creates a matrix and initialises the elements
        double[][] matrix = {{a,b},{c,d}};

        //if statements displays message if there is no inverse to the matrix
        if(inverse(matrix)==null){
            System.out.println("No inverse matrix.");
        }

        // else statement to print the output in presense of an inverse ( output )
        else {
            System.out.printf("%.2f\t%.2f\n", matrix[0][0], matrix[0][1]);
            System.out.printf("%.2f\t%.2f\n", matrix[1][0], matrix[1][1]);
        }
    }

    //Method - inverse ( returns double[][] )
    //this method gets the multi-dimensional array of the matrix from the main,
    // and by using the formula described in the description the program then computes
    // the determiner of if inverse exits or no, and then computes each element of
    // the inverse matrix and returns the inverse matrix to the main method
    public static double[][] inverse(double[][] mtx){

        //Variables - double variables for elements of the matrix
        double a = mtx[0][0];
        double b = mtx[0][1];
        double c = mtx[1][0];
        double d = mtx[1][1];

        //computes if the matrix has inverse or no
        double det = (a * d) - (b * c);

        //if statement to return null and finish the program if the matrix has no inverse
        if( det == 0 )
            return null;

        //reinitializes the elements of the matrix with the new inverse elements
        mtx[0][0] = d / det;
        mtx[0][1] = -b / det;
        mtx[1][0] = -c / det;
        mtx[1][1] = a / det;

        //returns the inverse matrix to main method
        return (mtx);


    }
}
/* Test 1
Enter a, b, c, d:
1 2 3 4
-2.00	1.00
1.50	-0.50

Process finished with exit code 0

* */

/* Test 2
Enter a, b, c, d:
0.5 2 1.5 4.5
-6.00	2.67
2.00	-0.67

Process finished with exit code 0

* */

/* Test 3
Enter a, b, c, d:
1 2 3 6
No inverse matrix.

Process finished with exit code 0

* */