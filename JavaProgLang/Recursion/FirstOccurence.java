public class FirstOccurence {
    public static int firstOccurence(int arr[],int key,int i){
        if(i==arr.length-1){
            return -1;
        }
        if(arr[i]==key){
            return i;
        }
        return firstOccurence(arr,key,i+1);
    }
    public static void main(String args[]){
        int arr[]={4,3,80,7,9,4,5,6,7,0,1,10,20};
        int key=7;
        System.out.println("First occurrence of "+key+" is at index : "+firstOccurence(arr,key,0));
    }
}
