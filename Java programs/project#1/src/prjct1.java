public class prjct1 {



    //Double every second digit from right to left.
    public static int sumOfDoubleEvenPlace(long number){
        String str = Long.toString(number);
        String[] arr = str.split("");

        int sum = 0;

        for(int i = str.length()-2;i>=0; i-=2 ){
            int temp = 2* Integer.parseInt(arr[i]);
            sum += sumDigit(temp);
        }
        return sum;
    }


    // If doubling of a digit results in a two-digit number,
    // add up the two digits to get a single-digit number.
    public static int sumDigit(int number){
        if(number >= 10){
            String str = Integer.toString(number);
            String arr[] = str.split("");
            int sum = Integer.parseInt(arr[0]) + Integer.parseInt(arr[1]);
            return sum;
        }
        return number;
    }






















    public static boolean prefixCheck(String number){
        String pf = "";
        int i = 0;

        pf += number.charAt(i);

        if(pf.equals("4"))
            return true;
        else if(pf.equals("5"))
            return true;
        else if(pf.equals("6"))
            return true;
        else if(pf.equals("3")){
            pf += number.charAt(i+1);
            if(pf.equals("37"))
                return true;
        }

        return false;

    }






}
