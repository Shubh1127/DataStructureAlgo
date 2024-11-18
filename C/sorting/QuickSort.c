#include<stdio.h>
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
    printf("\nAFTER INSERTION SORT:--->[");
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
        printf("]");
}