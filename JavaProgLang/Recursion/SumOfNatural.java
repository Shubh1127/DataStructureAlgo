import java.util.Scanner;
public class SumOfNatural {
    public static int SumOfNat(int n){
        if(n==1){
            return 1;
        }
        return n+SumOfNat(n-1);
    }
    public static void main(String args[]){
        int n;
        System.out.println("Enter the number to find the sum of natural numbers :");
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        System.out.println("Sum of natural numbers up to "+n+" is : "+SumOfNat(n));
        s.close();

    }
}
