/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW7a         : bank account abstract class
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 08/08/21
 ******************************************************************************/

/*****************************************************************************
 *	 making a bank count class with defined abilities throughout methods
 * ___________________________________________________________________________
 *
 * 	 This Program creates an abstract class of bank account and a
 * 	 class of savings account that is the extended by the bank account class.
 * 	 both classes define some methods that we might override in the
 * 	 savings account for the difference of functions
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	N/A
 *
 *	 OUTPUT:
 *	 	N/A
 *****************************************************************************/
abstract class BankAccount {

    //private variables
    private double balance;
    private int numDeposits;
    private int numWithdrawals;
    private final int annualInterestRate;
    private double serviceCharge;

    //constructor
    public BankAccount(double balance, int annualInterestRate){

        this.balance = balance;

        this.annualInterestRate = annualInterestRate;

        numDeposits = 1;

        numWithdrawals = 0;
    }

    //class method to get the balance
    public double getBalance(){

        return balance;
    }

    //class method to withdraw an amount
    public void withdraw(double amount){

        if(getBalance() >= amount){
            balance -= amount;
            System.out.print("Amount withdraw successfully. ");
            System.out.println("Final Account Balance after withdraw is: $" + getBalance());
            numWithdrawals++;
        }

        else{
            System.out.println(">>>Insufficient funds in the account to process the withdraw<<<");
        }
    }

    //class method to deposit an amount
    public void deposit(double amount){
        balance += amount;
        System.out.println("Amount deposited successfully.");
        numDeposits++;
        System.out.println("Final Account Balance after deposit is: $"+getBalance());
    }

    //class method to calculate the interest
    public void Interest(){
        double monthlyRate = annualInterestRate / 12;
        double monthlyIntAmount = balance * monthlyRate;
        balance += monthlyIntAmount;
    }

    //class method to set monthly service charges
    public void setMonthlyFee(double serviceCharge){
        this.serviceCharge = serviceCharge;
    }

    //class method to process the service charges and interest
    public void monthlyPay(){
        if(balance >= serviceCharge) {
            balance -= serviceCharge;
            Interest();
        }

        serviceCharge = 0;
        numDeposits = 0;
        numWithdrawals = 0;
    }

    //class method to get the total number of withdrawals
    public int getNumWithdrawals(){
        return this.numWithdrawals;
    }

    //class method to get the total number of deposits
    public int getNumDeposits(){
        return this.numDeposits;
    }
}




class SavingsAccount extends BankAccount {

    //private variables of the class
    private boolean accStatus;

    //constructor
    public SavingsAccount(double balance, int interestRate) {
        super(balance, interestRate);
        accStatus = true;
    }

    //Overriding super class method withdraw
    public void withdraw(double amount) {

        if(!accStatus){
            System.out.println("Unable to process. Your account is inactive");
        }

        else
            super.withdraw(amount);

        if(super.getBalance() < 25)
            accStatus = false;
    }

    //Overriding super class method deposit
    public void deposit(double amount) {

        super.deposit(amount);

        if (super.getBalance() > 25)
            accStatus = true;
    }

    //Overriding super class method monthlyPay()
    public void monthlyPay(){

        if(super.getNumWithdrawals() > 4){
            double charge = (super.getNumWithdrawals() - 4); // getting number of withdrawals more then 4
            super.setMonthlyFee(charge);
            super.monthlyPay();

            if (super.getBalance() < 25)
                this.accStatus = false;
        }
    }
}