#include<stdio.h>
void Bubblesort(int arr[],int size){
    int temp,swapped;
    for(int i=0;i<size-1;i++){
        swapped=0;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
}
int main(){
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
    Bubblesort(arr,size);
    printf("\nAFTER BUBBLE SORT:--->[");
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
        printf("]");
}