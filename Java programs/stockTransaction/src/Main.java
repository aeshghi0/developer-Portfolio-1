/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW1d         : Stock transaction program
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 6/27/21
 ******************************************************************************/
public class Main {
    /*****************************************************************************
     *	 Stock transaction program
     * ___________________________________________________________________________
     *
     * 	 This Program calculates and displays the output for a stock transaction
     * 	 for pre-valued variables. This program will calculate the cost of buy,
     * 	 the cost of the commission, the selling price, the selling commission
     * 	 and the total money lost or gained from the stocks
     * ___________________________________________________________________________
     *	 INPUT :
     *	 	none
     *
     *	 OUTPUT:
     *	 cost    :   amount of money paid for the shares
     *	 buyComm :   commission paid on the purchase
     *	 buyTotal:   total money paid on the purchase
     *	 income  :   money made from selling the shares
     *	 sellComm:   money paid for commission on sale
     *	 incomeTotal: total money made after paying commission
     *	 money      : total money loss or profit after all the transactions
     *****************************************************************************/
    public static void main(String[] args)
    {
        //amount of shares Joe bought
        double shares = 1000;

        //buy price per share
        double buyPrice = 32.87;

        //amount of money paid for shares
        double cost = shares * buyPrice;

        //amount of money paid for commission
        double buyComm = cost * 0.02;

        //total amount Joe paid
        double buyTotal = cost + buyComm;

        //sell price per share
        double sellPrice = 33.92;

        //amount of money made from selling the stocks
        double income = shares * sellPrice;

        //amount of money paid for commission
        double sellComm = income * 0.02;

        //total amount made from selling the stock
        double incomeTotal = income - sellComm;

        //total money gained or loss
        double money = incomeTotal - buyTotal;

        //display output
        System.out.printf("Joe paid $%.2f for the stocks",cost);
        System.out.printf("\nJoe paid his broker a commission of $%.2f on the purchase",buyComm);
        System.out.printf("\nSo, Joe paid the total of $%.2f",buyTotal);
        System.out.printf("\nJoe sold the stocks for $%.2f",income);
        System.out.printf("\nJoe paid his broker a commission of $%.2f on the sale",sellComm);
        System.out.printf("\nSo, Joe received a total of $%.2f",incomeTotal);
        System.out.printf("\nJoe's profit or loss $%.2f",money);
    }
}

/* Test 1

Joe paid $32870.00 for the stocks
Joe paid his broker a commission of $657.40 on the purchase
So, Joe paid the total of $33527.40
Joe sold the stocks for $33920.00
Joe paid his broker a commission of $678.40 on the sale
So, Joe received a total of $33241.60
Joe's profit or loss $-285.80
Process finished with exit code 0

*/