#include<stdio.h>
void InsertionSort(int arr[],int size){
    int curr,prev;
    for(int i=1;i<size;i++){
            curr=arr[i];
            prev=i-1;
        while(prev>=0 && arr[prev]>curr){
                arr[prev+1]=arr[prev];
                prev--;
        }
        arr[prev+1]=curr;
    }
}
int main() {
int size;
    printf("\nEnter the size of an array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elmenets into an array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nBefore sorting--->[");
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
    printf("]");
    InsertionSort(arr,size);
    printf("\nAFTER INSERTION SORT:--->[");
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
        printf("]");
}