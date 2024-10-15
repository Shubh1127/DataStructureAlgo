import java.util.*;
public class Factorial {
    public static int facto(int number){
        int fact=1;
        for(int i=2;i<=number;i++){
            fact*=i;
        }
        return fact;
    }
    public static  void main(String args[]){
        
        System.out.println("Enter a number");
        Scanner s=new Scanner(System.in);
        int number=s.nextInt();
        System.out.println(facto(number));
        

    }   
}