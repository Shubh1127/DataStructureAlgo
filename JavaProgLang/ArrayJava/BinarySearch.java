import java.util.*;

public class BinarySearch{

    public static int BinSearch(int arr[],byte key){
        int start=0;
        int end=arr.length-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==key){
                return mid;
            } else if(arr[mid]<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }

        }
        return -1;

    }
    public static boolean isSorted(int arr[]){
        for(byte i=0;i<arr.length-1;i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }
    public static void sorting(int arr[]){
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap arr[j] and arr[j + 1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
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
       
       if(!isSorted(arr)){
        System.out.println("array is not sorted ,sorting it into ascending order");
        sorting(arr);
        System.out.print("The new sorted array is: ");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
       }
        System.out.println("\nEnter the key to search");
        byte key=s.nextByte();
       
        int answer=BinSearch( arr, key);
        if(answer==-1){
            System.out.println("Key not found");
        }else{
            System.out.println("Key is at index : "+answer);
        }
    }
}