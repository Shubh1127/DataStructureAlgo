#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *front=NULL;
struct Node *rear=NULL;
void enqueue();
void dequeue();
void printList();
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
        case 3:printList();
            break;
        default:printf("\nWrong choice by user");
    }printf("\nDo you want to continue(y/n)?: ");
    ch=getche();
    }while(ch=='y' || ch=='Y');
}
void enqueue(){
    struct Node *temp=malloc(sizeof(struct Node));
    printf("\nEnter the data: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(front==NULL){
        front=temp;
        rear=temp;
    }else{
        rear->next=temp;
        rear=temp;
    }
    printList();
}
void dequeue(){
    if(front==NULL){
        printf("\nQueue is  underflow");
    }else{
        struct Node *temp=front;
        if(front==rear){
            front=NULL;
            rear=NULL;
            printf("\n%d is deleted",temp->data);
            free(temp);
        }else{
            front=temp->next;
            printf("%d is deleted",temp->data);
            free(temp);
        }
        printList();
    }
}
void printList(){
    if(front==NULL){
        printf("\nQueue is underflow");
    }else{
        struct Node *temp=front;
        printf("\nstart->");
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL");
    }
}