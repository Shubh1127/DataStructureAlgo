#include<stdio.h>
#include<stdbool.h>
void LinSearch(short arr[],short key,short length){
    bool found=false;
    for(short i=0;i<length;i++){
        if(arr[i]==key){

        printf("key is found at index %hd",i);
        found=true;
        }
    }
    if(!found){
        printf("\nKey is not found. Please Enter the correct key");
    }
}
int main(){
    printf("Enter the size of an array: ");
    short size;
    scanf("%hd",&size);
    short arr[size];
    short arrLength=sizeof(arr)/sizeof(arr[0]);
    printf("\nEnter the data into the array: ");
    for(short i=0;i<arrLength;i++){
        scanf("%hd",&arr[i]);
    }
    printf("\nEnter the key to search: ");
    short key;
    scanf("%hd",&key);
    LinSearch(arr,key,arrLength);
}