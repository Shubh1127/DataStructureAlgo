import java.util.Scanner;
public class FactorialofNum {
public static int fact(int n){
    if (n==0){
        return 1;
    }
    return n*fact(n-1);
}
    public static void main(String args[]){
        int n;
        System.out.println("Enter the number to find the factorial :");
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        System.out.println("Factorial of "+n+" is : "+fact(n));


    }
}
