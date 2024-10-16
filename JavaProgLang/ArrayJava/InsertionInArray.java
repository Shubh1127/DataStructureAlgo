
import java.util.*;
public class InsertionInArray {
    public static void main(String args[]){
        int newArr[]=new int[5];
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the elements into the array: ");
        for(int i=0;i<=4;i++){
            newArr[i]=s.nextInt();
        }
        System.out.println("The array you created is: ");
        for(int i=0;i<=4;i++){
            System.out.print(newArr[i]+" ");
        }

    }
}
