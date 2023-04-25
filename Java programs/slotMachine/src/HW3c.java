import java.util.Scanner;

public class HW3c {

    public static void main(String[] args) {

        // Create a Scanner object to read input from keyboard.
        Scanner input = new Scanner(System.in);

        // Declare data types
        int money = 0;
        int compNum = 0;
        int cherry = 0;
        int orange = 0;
        int plum = 0;
        int bell = 0;
        int melon = 0;
        int bar = 0;

        String PlayChoice;
        boolean play = true;
        System.out.println("Welcome to the Slot Machine Simulation.");

        do
        {
            //Prompt user for how much they want to bet
            System.out.print("Enter the amount you would like to bet: $");
            money = input.nextInt();

            for(int i = 0; i <= 2; i++)
            {
                //Generate a random number for computer's play
                compNum = (int)(Math.random()*6);

                switch (compNum)
                {
                    case 0: System.out.print("-Cherries-");
                        cherry++;
                        break;

                    case 1: System.out.print("-Oranges-");
                        orange++;
                        break;

                    case 2: System.out.print("-Plums-");
                        plum++;
                        break;

                    case 3: System.out.print("-Bells-");
                        bell++;
                        break;

                    case 4: System.out.print("-Melons-");
                        melon++;
                        break;

                    case 5: System.out.print("-Bars-");
                        bar++;
                        break;
                }
            }

            System.out.print("\n");
            if(cherry == 2)
            {
                System.out.print("Great! Two match.\n");
                money = 2 * money;
                System.out.printf("You won a total of %d.\n",money);
            }
            else if(orange == 2)
            {
                System.out.print("Great! Two match.\n");
                money = 2 * money;
                System.out.printf("You won a total of %d.\n",money);

            }
            else if(plum == 2)
            {
                System.out.print("Great! Two match.\n");
                money = 2 * money;
                System.out.printf("You won a total of %d.\n",money);
            }
            else if(bell == 2)
            {
                System.out.print("Great! Two match.\n");
                money = 2 * money;
                System.out.printf("You won a total of %d.\n",money);
            }
            else if(melon == 2)
            {
                System.out.print("Great! Two match.\n");
                money = 2 * money;
                System.out.printf("You won a total of %d.\n",money);
            }
            else if(bar == 2)
            {
                System.out.print("Great! Two match.\n");
                money = 2 * money;
                System.out.printf("You won a total of %d.\n",money);
            }
            else if(cherry == 3)
            {
                System.out.print("Great! Three match.\n");
                money = 3 * money;
                System.out.printf("You won a total of %d.\n",money);
            }
            else if(orange == 3)
            {
                System.out.print("Great! Three match.\n");
                money = 3 * money;
                System.out.printf("You won a total of %d.\n",money);
            }
            else if(plum == 3)
            {
                System.out.print("Great! Three match.\n");
                money = 3 * money;
                System.out.printf("You won a total of %d.\n",money);
            }
            else if(bell == 3)
            {
                System.out.print("Great! Three match.\n");
                money = 3 * money;
                System.out.printf("You won a total of %d.\n",money);
            }
            else if(melon == 3) {
                System.out.print("Great! Three match.\n");
                money = 3 * money;
                System.out.printf("You won a total of %d.\n", money);
            }
            else if(bar == 3)
            {
                System.out.print("Great! Three match.\n");
                money = 3 * money;
                System.out.printf("You won a total of %d.\n",money);
            }
            else{
                System.out.print("You didm't win anything :(\n");
            }

            //Prompt user and get their choice
            System.out.print("Would you like to play again?\n" + "Enter Y for yes or N for no: ");
            PlayChoice= input.next();
            PlayChoice = PlayChoice.toUpperCase();

            //Check user's entry
            if(PlayChoice.equals("N"))
            {
                play = false;
            }
            else if (PlayChoice.equals("Y")){
                play = true;
                cherry = 0;
                orange = 0;
                plum = 0;
                bell = 0;
                melon = 0;
                bar = 0;
            }
        }while(play);

        // Close input
        input.close();
    }
}
/* Test 1
 Welcome to the Slot Machine Simulation.
Enter the amount you would like to bet: $20
-Cherries--Bars--Cherries-
Great! Two match.
You won a total of 40.
Would you like to play again?
Enter Y for yes or N for no: Y
Enter the amount you would like to bet: $20
-Cherries--Plums--Oranges-
You didm't win anything :(
Would you like to play again?
Enter Y for yes or N for no: n

Process finished with exit code 0

*/

/* Test 2
Welcome to the Slot Machine Simulation.
Enter the amount you would like to bet: $30
-Bars--Melons--Plums-
You didm't win anything :(
Would you like to play again?
Enter Y for yes or N for no: y
Enter the amount you would like to bet: $10
-Melons--Plums--Oranges-
You didm't win anything :(
Would you like to play again?
Enter Y for yes or N for no: y
Enter the amount you would like to bet: $20
-Bells--Bells--Bells-
Great! Three match.
You won a total of 60.
Would you like to play again?
Enter Y for yes or N for no: n

Process finished with exit code 0
*/