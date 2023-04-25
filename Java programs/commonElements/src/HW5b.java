/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW5b         : Common element arrays
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 7/11/21
 ******************************************************************************/
import java.util.ArrayList;
import java.util.Scanner;
/*****************************************************************************
 *	 Common elements
 * ___________________________________________________________________________
 *
 * 	 This Program prompts the user to enter two array of integers and then
 * 	 computes and outputs the common elements in both arrays. the first number
 * 	 input by the user is determined as the size of the array for the computer
 * 	 and based on that the computer keeps getting input from the user
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	numAr1 : array number 1 of integers
 *	    numAr2 : array number 2 of integers
 *
 *	 OUTPUT:
 *	 	list : array list of integers containing the common elements of both
 *	           arrays
 *****************************************************************************/
public class HW5b {
    public static void main(String[] args){

        //creating a new array list
        ArrayList<Integer> list = new ArrayList<Integer>();

        //creating a new scanner project for input
        Scanner in = new Scanner(System.in);

        //prompts the user to enter the list number 1
        // ( Although the first element determines the number of elements and is not in the list)
        System.out.println("Enter List 1: ");
        int n1 = in.nextInt();

        //creating the first array
        int[] numAr1 = new int[n1];

        //for loop keeps getting input from user based on the size of the array
        for(int i=0; i < n1; i++){
            numAr1[i] = in.nextInt();
        }

        //prompts the user to enter list number 2
        // ( Although the first element determines the number of elements and is not in the list)
        System.out.println("Enter list 2: ");
        int n2 = in.nextInt();

        //creating the list number 2
        int[] numAr2 = new int[n2];

        //for loop keeps getting input from the user based on the size of the array
        for(int i=0; i < n2; i++){
            numAr2[i] = in.nextInt();
        }

        //for loop going through elements of first array for the comparison
        for(int i=0; i < numAr1.length; i++){
            //for loop going through elements of second array for the comparison
            for(int j=0; j < numAr2.length; j++){
                //if statement if a common element was found to add to the list
                if(numAr1[i]==numAr2[j])
                    list.add(numAr1[i]);
            }
        }

        //displays the common elements using the for loop to go through the list
        System.out.println("The common elements are: ");
        for(int i=0; i < list.size();i++)
            System.out.print(list.get(i)+" ");
    }
}

/* Test 1
Enter List 1:
5
5
2
10
1
6
Enter list 2:
9
2
3
10
3
34
35
67
3
1
The common elements are:
2 10 1
Process finished with exit code 0
* */



/* Test 2
Enter List 1:
4
9
5
6
1
Enter list 2:
9
4
7
6
1
7
3
5
0
34
The common elements are:
5 6 1
Process finished with exit code 0

* */