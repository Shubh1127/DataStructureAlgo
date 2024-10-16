#include<stdio.h>
#include<limits.h>
short Largest(short arr[],short size){
    short larg=SHRT_MIN;
    for(short i=0;i<size;i++){
        if(arr[i]>larg){
            larg=arr[i];
        }
    }
    return larg;

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
    printf("largest is %hd",Largest(arr,size));
}