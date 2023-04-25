import java.util.Scanner;

public class main{
    public static void main(String[] args) {

    Scanner in = new Scanner(System.in);

    System.out.println("Enter list: ");
    int size = in.nextInt();

    int[] arr = new int[size];

    for(int i = 0; i < size; i++){
        arr[i] = in.nextInt();
    }

    boolean res = isSorted(arr);

    if(res)
        System.out.println("The list is already sorted.");
    else
        System.out.println("The list is not sorted");
    }
    public static boolean isSorted(int[] list) {
        boolean result = true;

        for(int i=0; i < list.length - 1; i++){
            if(list[i] > list[i+1])
                result = false;
        }
        return result;
    }
}