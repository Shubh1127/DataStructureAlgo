public class QuickSort {

    public static void quickSort(int arr[],int si,int ei){
        if(si>=ei) return;
        int pivot=arr[ei];
        int pIndex=si;
        for(int i=si;i<ei;i++){
            if(arr[i]<=pivot){
                //swap
                int temp=arr[i];
                arr[i]=arr[pIndex];
                arr[pIndex]=temp;
                pIndex++;
            }
        }
        //swap pivot
        int temp=arr[ei];
        arr[ei]=arr[pIndex];
        arr[pIndex]=temp;

        quickSort(arr,si,pIndex-1); 
        quickSort(arr,pIndex+1,ei); 
    }
    public static void printArr(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");;
        }
        
    }
    public static void main(String args[]){
        int arr[]={6,3,9,5,2,8};
        quickSort(arr,0,arr.length-1);
        printArr(arr);

    }
}
