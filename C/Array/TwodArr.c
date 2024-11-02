#include<stdio.h>
int main(){
    printf("Enter the size of rows\n");
    int rows;
    scanf("%d",&rows);
    
    printf("Enter the size of cols\n");
    int cols;
    scanf("%d",&cols);

    int arr[rows][cols];
printf("Enter the elements to the array ");
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        printf("%d",arr[i][j]);
        printf(" ");
    }
    printf("\n");
    }
}