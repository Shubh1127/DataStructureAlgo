public class LastOccurence {
    public static int lastOccurence(int arr[],int key,int i){
        if(arr.length==i){
            return -1;
        }
        int isFound=lastOccurence(arr,key,i+1);
        if(isFound == -1 && arr[i]==key){
            return i;
        }
        return isFound;
    }
 public static void main(String args[]){
    int arr[]={4,3,80,7,9,4,5,6,7,0,1,10,20};
    int key=4;
    System.out.println("Last occurrence of "+key+" is at index : "+lastOccurence(arr,key,0));

 }   
}
