import java.util.*;

public class LinearSearch {
    public static void LinSearch(byte arr[], byte key) {
        boolean found=false;
        for (byte i = 0; i < arr.length; i++) {
            if (arr[i] == key) {
                System.out.println("The key is at index of "+i);
                found=true;
                break;
            } 
        }
        if(!found){
            System.out.println("key is not found. Please enter the correct key");
        }

    }

    public static void main(String args[]) {
        System.out.println("Enter the size of an array: ");
        Scanner s = new Scanner(System.in);
        byte size = s.nextByte();
        System.out.println("Enter the elements into the array");
        byte arr[] = new byte[size];
        for (byte i = 0; i <arr.length; i++) {
            arr[i] = s.nextByte();
        }
        System.out.println("Enter the key to search in array: ");
        byte key = s.nextByte();
        LinSearch(arr, key);

    }
}
