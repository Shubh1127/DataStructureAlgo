import java.util.*;
public class LargestInArr {
    public static int Largest(byte arr[]){
        int larg=Integer.MIN_VALUE;
        for(byte i=0;i<arr.length;i++){
            if(arr[i]>larg){
                larg=arr[i];
            }
        }
        return larg;
    }
    public static void main(String args[]){
        System.out.println("Enter the size of an array: ");
        Scanner s = new Scanner(System.in);
        byte size = s.nextByte();
        System.out.println("Enter the elements into the array");
        byte arr[] = new byte[size];
        for (byte i = 0; i <arr.length; i++) {
            arr[i] = s.nextByte();
        }
        System.out.println("Largest element is: "+Largest(arr));
    }
}
