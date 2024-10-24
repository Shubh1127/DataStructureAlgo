#include<stdio.h>
int BinSearch(short arr[],short key,short size){
     short start=0,end=size;
     while(start<=end){
        short mid=(start+end)/2;
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
int main(){
     printf("Enter the size of an array: ");
    short size;
    scanf("%hd",&size);
    short arr[size];
    printf("\nEnter the data into the array: ");
    for(short i=0;i<size;i++){
        scanf("%hd",&arr[i]);
    }
    printf("\nEnter the key to search: ");
    short key;
    scanf("%hd",&key);
    int answer=BinSearch(arr,key,size);
    if(answer==-1){
        printf("Key not found");
    }else{
        printf("Key found at index %d",answer);
    }
}