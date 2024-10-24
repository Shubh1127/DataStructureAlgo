#include<stdio.h>
void ReverseArr(int arr[],int size){
    int start=0,end=size-1;
     while(start<end){
            int temp=arr[end];
            arr[end]=arr[start]; 
            arr[start]=temp;
            start++;
            end--;
        }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    ReverseArr(arr,size);
    printf("after reversing: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

}