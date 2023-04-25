/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * LAB5         : Common element
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 7/26/21
 ******************************************************************************/
import java.util.Scanner;

public class Lab5 {

    public static void main(String[] args){
        int num;
        int count = 0;

        int[] numbers = new int[100];

        Scanner in = new Scanner(System.in);

        System.out.print("Enter the integers between 1 and 100: ");

        do {
            num = in.nextInt();
            numbers[count] = num;
            count++;
        }while(num!=0);

        repeatTimes(numbers);
    }


    public static void repeatTimes(int[] nums){
        for(int i=1; i< 100; i++){
            int cnt = 0;
            for(int j=0; j< nums.length-1; j++){
                if(nums[j]==i)
                    cnt++;
            }

            if(cnt != 0){
                System.out.printf("%d occures %d%s%n",i,cnt, cnt> 1?"times":"time");
            }
        }
    }
}

/* Test 1

Enter the integers between 1 and 100: 2 5 6 4 3 23 43 2 0
2 occures 2times
3 occures 1time
4 occures 1time
5 occures 1time
6 occures 1time
23 occures 1time
43 occures 1time

Process finished with exit code 0
* */

/* Test 2

Enter the integers between 1 and 100: 2 5 8 43 7 1 9 4 2 6 9 32 7 6 69 85 42 0
1 occures 1time
2 occures 2times
4 occures 1time
5 occures 1time
6 occures 2times
7 occures 2times
8 occures 1time
9 occures 2times
32 occures 1time
42 occures 1time
43 occures 1time
69 occures 1time
85 occures 1time

Process finished with exit code 0
* */