#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *start;
struct Node *insert_at_beg(struct Node*);
struct Node *insert_at_end(struct Node*);
struct Node *insert_at_loc(struct Node*);
void printData(struct Node*);
int main(){
    int choice;
    char ch;
    do{
        printf("\n1.Insert at beginning");
        printf("\n2.Insert at end");
        printf("\n3.Insert at loc");
        printf("\nEnter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:start=insert_at_beg(start);
            break;
            case 2:start=insert_at_end(start);
            break;
            case 3:start=insert_at_loc(start);
            break;
            case 4:printData(start);
            break;
            default:printf("\nwrong choice by user");
        }
        printf("\nDo you want to continue(y/n)?");
        ch=getche();
    }while(ch=='y' || ch== 'Y');
}
struct Node *insert_at_beg(struct Node *start){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the data");
    scanf("%d",&temp->data);
    if(start==NULL){
        start=temp;
        temp->next=NULL;
    }
    else{
        temp->next=start;
        start=temp;
    }
    printData(start);
    return start;
}

struct Node *insert_at_end(struct Node *start){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the data\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL){
        start=temp;
    }else{
        struct Node *ptr;
        ptr=start;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
    printData(start);
    return start;
}
void printData(struct Node *start){
    struct Node *ptr;
    ptr=start;
    printf("|start|->");
    while(ptr!=NULL){
        printf("|%d|->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
}

struct Node *insert_at_loc(struct Node *start){
    printData(start);
    int value;
    printf("\nEnter the node after which you want to insert new value");
    scanf("%d",&value);
    struct Node *ptr;
    ptr=start;
    while(ptr!=NULL){
        if(value==ptr->data){
            break;
        }else{
            ptr=ptr->next;
        }
    }
    if(ptr==NULL){
        printf("\nInsertion not possible. value Node not found");
    }else{
        struct Node *temp;
        temp=(struct Node*)malloc(sizeof(struct Node));
        printf("\nEnter the new data");
        scanf("%d",&temp->data);
        temp->next=ptr->next;
        ptr->next=temp;
    }
    printData(start);
    return start;
}
