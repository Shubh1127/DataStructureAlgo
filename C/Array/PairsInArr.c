#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array");
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        int curr=arr[i];
         for(int j=i+1;j<size;j++){
                printf("(",curr,",",arr[j],")");
         }
    }
}