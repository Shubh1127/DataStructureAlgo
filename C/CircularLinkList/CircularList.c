#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *start=NULL;
struct Node *insert_at_beg(struct Node *);
struct Node *insert_at_end(struct Node *);
struct Node *insert_at_loc(struct Node *);
struct Node *delete_at_beg(struct Node *);
void printList(struct Node *);
int main(){
    int choice;
    char ch;
    do{
        printf("\n1.Insert at the beginning");
        printf("\n2.Insert at the end");
        printf("\n3.Insert at the location");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:start=insert_at_beg(start);
            break;
            case 2:start=insert_at_end(start);
            break;
            case 3:start=insert_at_loc(start);
            break;
            case 4:start=delete_at_beg(start);
            break;
            default:printf("\nWrong choice by user");
        }printf("\nDo you want to continue(y/n)?");
        ch=getche();
    }while(ch=='y' || ch=='Y');
}
struct Node *insert_at_beg(struct Node *start){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter your data: ");
    scanf("%d",&temp->data);
    if(start==NULL){
        temp->next=temp;
        start=temp;
    }else if(start->next==start){
        temp->next=start;
        start->next=temp;
        start=temp;
    }else{
        struct Node *ptr;
        ptr=start;
        while(ptr->next!=start){
            ptr=ptr->next;
        }
        temp->next=start;
        ptr->next=temp;
        start=temp;
    }
    printList(start);
    return start;
}
struct Node *insert_at_end(struct Node *start){

        struct Node *temp;
        temp=malloc(sizeof(struct Node));
        printf("\nEnter your data: ");
        scanf("%d",&temp->data);
        if(start==NULL){
            temp->next=temp;
            start=temp;
        }else if(start->next==start){
            start->next=temp;
            temp->next=start;
        }
        else{
            struct Node *ptr;
            ptr=start->next;
            while(ptr->next!=start){
                ptr=ptr->next;
            }
            ptr->next=temp;
            temp->next=start;
        }
        printList(start);
        return start;
}
struct Node *insert_at_loc(struct Node *start){
    struct Node *temp;
    temp=malloc(sizeof(struct Node));
    if(start==NULL){
    printf("\nEnter your data: ");
    scanf("%d",&temp->data);
        temp->next=temp;
        start=temp;
    }else if(start->next==start){
        start=insert_at_end(start);
        return start;
    }
    else{
         printf("\nEnter your data: ");
        scanf("%d",&temp->data);
        printList(start);
        printf("\nEnter the node after which you want to insert the new node: ");
        int prevNode;
        scanf("%d",&prevNode);
        struct Node *ptr;
        ptr=start->next;
        while(ptr!=start){
            if(prevNode==ptr->data){
                break;
            }else{
                ptr=ptr->next;
            }
        }
        if(ptr==start){
            printf("\nNo insertion possible as the entered Node not found");
        }else{
            temp->next=ptr->next;
            ptr->next=temp;
        }
    }
    printList(start);
    return start;
}

struct Node *delete_at_beg(struct Node *start){
    if(start==NULL){
        printf("\nNo deletion Possible");
    }
    else if(start->next==start){
        printList(start);
        printf("\n|%d| is deleted",start->data);
        start=NULL;
        free(start);
    }else{
        printList(start);
        struct Node *ptr;
        ptr=start;
        while(ptr->next!=start){
            ptr=ptr->next;
        }
        struct Node *temp;
        temp=start;
        printf("\n|%d| is deleted",temp->data);
        start=start->next;
        ptr->next=temp->next;
        free(temp);
    }
    printList(start);
    return start;
}

void printList(struct Node *start){
    if(start==NULL){
        printf("\nList is empty");
    }else{
        struct Node *ptr;
        ptr=start;
        printf("\n|start|->");
        do{
            printf("|%d|->",ptr->data);
            ptr=ptr->next;
        }while(ptr!=start);
        printf("NULL");
    }
}