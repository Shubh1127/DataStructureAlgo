#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *start=NULL;
struct Node *insert_at_beg(struct Node*);
void printList(struct Node *start){
    struct Node *ptr;
    ptr=start;
    if(ptr==NULL){
        printf("\nList is empty");
    }else{
        while(ptr!=NULL){
        printf("|%d|->",ptr->data);
        ptr=ptr->next;
        }
        printf("NULL\n");
    }
}
int main(){
    int choice;
    char ch;
    do{
        printf("\n1.Insert at beginning");
        printf("\nEnter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:start=insert_at_beg(start);
            break;
            default:printf("\nWrong choice by user");
        }
        printf("\nDo you want to continue(y/n)");
        ch=getche();
    }while(ch=='y' || ch=='Y');
}
struct Node *insert_at_beg(struct Node *start){
    
        struct Node *temp;
        temp=(struct Node*)malloc(sizeof(struct Node));
        printf("\nEnter the data");
        scanf("%d",&temp->data);
    if(start==NULL){
        start=temp;
        temp->next=NULL;
    }else{
        temp->next=start;
        start=temp;
    }
    printList(start);
return start;
}