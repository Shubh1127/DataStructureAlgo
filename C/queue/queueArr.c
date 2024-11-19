#include<stdio.h>
#include<conio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
void enqueue();
void dequeue();
void printQueue();
int main(){
    int choice;
    char ch;
    do{

    printf("\n1.for enqueue");
    printf("\n2.for dequeue");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:enqueue();
            break;
        case 2:dequeue();
            break;
        case 3:printQueue();
            break;
        default:printf("\nWrong choice by user");
    }printf("\nDo you want to continue(y/n)?: ");
    ch=getche();
    }while(ch=='y' || ch=='Y');
}
void enqueue(){
    if(front==(rear+1)%max){
            printf("\nQueue is overflow");
    }else{
        int item;
        printf("Enter the data: ");
        scanf("%d",&item);
        if(front==-1){
            front=rear=0;
        }else{
            rear=(rear+1)%max;
        }
        queue[rear]=item;
        printf("\n%d is inserted",item);
        printQueue();
    }
}
void dequeue(){
    if(front==-1){
        printf("\nQueue is underflow");
    }else{
        int item=queue[front];
        if(front==rear){
                front=rear=-1;
        }else{
            front=(front+1)%max;
        }
        printf("%d is deleted",item);
        printQueue();
    }
}
void printQueue(){
    if(front==-1){
        printf("\nQueue is underflow");
    }else{
        if(front>rear){
            printf("\n[");
            for(int i=front;i<max;i++){
                printf("%d ,",queue[i]);
            }
            for(int i=0;i<=rear;i++){
                printf("%d ,",queue[i]);
            }
            printf("]\n");
        }else{
                printf("\n[");
                for(int i=front;i<=rear;i++){
                    printf("%d ,",queue[i]);
                }
                printf("]\n");
        }
    }
}