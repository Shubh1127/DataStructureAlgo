public class SubArr {
    public static void main(String args[]){
        int sum;
        int arr[]={1,2,3,4,5,6};
        for(int i=0;i<arr.length;i++){
            for(int j=i;j<arr.length;j++){
                    sum=0;
                    for(int k=i;k<=j;k++){
                        // int sum=0;
                        sum+=arr[k];
                        System.out.print(arr[k]+" "+" sum: "+sum);

                    }
                    System.out.println();
            }
            System.out.println();
        }
    }
}
