import java.util.*;
public class prime{
        public static int checkPrime(int n){
            if(n==1){
                return -1;
            }else{
                for(int i=2;i<=Math.sqrt(n);i++){
                    if(n%i==0){
                        return -1;
                    }
                }
            }
            return 1;
        }
   public static void main(String args[]){
    System.out.println("Enter a number to check");
    Scanner s=new Scanner(System.in);
    int num=s.nextInt();
   int answer=checkPrime(num);
    if(answer==1){
        System.out.println(num+" is a prime number");
    }else{
        System.out.println(num+" is not a prime number");
        
    }
}
}