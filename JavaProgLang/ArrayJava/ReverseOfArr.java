import java.util.Scanner;

public class ReverseOfArr {
    public static void Reverse(int arr[]){
        int start=0,end=arr.length-1;
        while(start<end){
            int temp=arr[end];
            arr[end]=arr[start]; 
            arr[start]=temp;
            start++;
            end--;
        }
        
    }
    public static void main(String args[]){
        System.out.println("Enter the size of an array: ");
        Scanner s = new Scanner(System.in);
        byte size = s.nextByte();
        System.out.println("Enter the elements into the array");
        int arr[] = new int[size];
        for (byte i = 0; i <arr.length; i++) {
            arr[i] = s.nextByte();
        }
        System.out.println("Reverse array : ");
        Reverse(arr);
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
