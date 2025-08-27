import java.util.Scanner;
public class NthFibonacci {
    public static int Fb(int n){
        if (n==0 || n==1){
            return n;
        }
        return Fb(n-1)+Fb(n-2);
    }
    public static void main(String args[]){
        int n;
        System.out.println("Enter the position of Fibonacci series to find the value :");
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        System.out.println("Fibonacci value at position "+n+" is : "+Fb(n));
        s.close();
    }
    
}
