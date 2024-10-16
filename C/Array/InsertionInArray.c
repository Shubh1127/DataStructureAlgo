#include<stdio.h>
int main(){
    printf("Enter the data into the array: ");
    int newArr[5];
    for(int i=0;i<=4;i++){
        scanf("%d",&newArr[i]);
    }
    printf("\nThe array you created : ");
    for(int i=0;i<=4;i++){
        printf("%d ",newArr[i]);
    }
    return 0;
}