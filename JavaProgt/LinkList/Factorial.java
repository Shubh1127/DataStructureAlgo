import java.util.*;
public class Factorial {
    public static double facto(double number){
        int fact=1;
        for(int i=1;i<=number;i++){
            fact*=i;
        }
        return fact;
    }
    public static  void main(String args[]){
        
        System.out.println("Enter a number");
        Scanner s=new Scanner(System.in);
        int number=s.nextInt();
        System.out.println(facto(number));
            //Binomial Coefficient
        System.out.println("Enter the n:");
        double num1=s.nextInt();
        System.out.println("Enter the r:");
        double num2=s.nextInt();
        double n=  facto(num1);
        double r=facto(num2);
        double num3=num1-num2;
        double sub=facto(num3);
        double Coefficient=n/(r*sub);
        System.out.println("Binomial Coefficient :  "+Coefficient);
        

    }   
}