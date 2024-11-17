#include<Stdio.h>
void SelectionSort(int arr[],int size){
  int minPoss;
  for(int i=0;i<size-1;i++){
    minPoss=i;
    for(int j=i+1;j<size;j++){
        if(arr[minPoss]>arr[j]){
            minPoss=j;
        }
    }
    int temp=arr[minPoss];
    arr[minPoss]=arr[i];
    arr[i]=temp;
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
   SelectionSort(arr,size);
    printf("\nAFTER INSERTION SORT:--->[");
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
        printf("]");
}