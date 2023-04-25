/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * LAB4         : Binary to hex
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 7/4/21
 ******************************************************************************/
import java.util.Scanner;
/*****************************************************************************
 *	 Binary number to hex number
 * ___________________________________________________________________________
 *
 * 	 This Program prompts the user to input a binary number as a string to the
 * 	 computer, then the computer uses a method and computes the binary value
 * 	 and converts it to the hex value
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	binaryValue : user input binary value
 *
 *	 OUTPUT:
 *	 	hexValue : hexValue of the number
 *****************************************************************************/
public class Lab4 {

    public static void main(String[] args){

        //new scanner project for reading the input
        Scanner in = new Scanner(System.in);

        //prompts the user to enter a binary number
        System.out.println("Enter a binary number: ");
        String binaryValue = in.nextLine();

        //displays the hex value of the number by using to call the binaryToHex method
        System.out.printf("The hex value is %s",binaryToHex(binaryValue));
    }


    //Method - binaryToHex ( return string )
    //this method gets the binaryValue from its caller (main method in this case)
    //and then it computes the binary value input by the user and returns the hexValue as
    //a string to the caller
    public static String binaryToHex(String binaryValue){
        //Variables
        String hexValue = "";
        String temp;
        char ch;
        int digit;

        while(!binaryValue.isEmpty()){
            digit = 4;

            if(binaryValue.length() < 4)
                digit = binaryValue.length();

            temp = binaryValue.substring(binaryValue.length() - digit, binaryValue.length());

            binaryValue = binaryValue.substring(0,binaryValue.length() - digit);

            int num = 0;

            for(int i =0; i < temp.length(); i++){
                num = (int) (num + (temp.charAt(i)-'0')*Math.pow(2,temp.length()-i-1));
            }

            if(num < 10){
                ch = (char)('0'+ num);
            }
            else{
                ch = (char)('A' + (num-10));
            }
            hexValue = ch + hexValue;
        }

        return hexValue;
    }
}

/* Test 1
Enter a binary number:
10001111
The hex value is 8F
Process finished with exit code 0
* */

/* Test 2
Enter a binary number:
101111110100010
The hex value is 5FA2
Process finished with exit code 0
* */

