// package JavaProgLang.sortingJava;
public class Bubble{
    public static void bub(int arr[]){
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr.length-1-i;j++){{
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }}
        }
    }
    public static void main(String args[]){
        int arr[]={6,5,1,10,9,0,2};
        bub(arr);
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }

    }
}