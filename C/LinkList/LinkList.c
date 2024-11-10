#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *start=NULL;
struct Node *insert_at_beg(struct Node*);
struct Node *insert_at_end(struct Node*);
struct Node *insert_at_loc(struct Node*);
struct Node *delete_first(struct Node*);
struct Node *delete_last(struct Node*);
struct Node *delete_At_loc(struct Node*);
void searchData(struct Node*);
void printList(struct Node *start){
    struct Node *ptr;
    ptr=start;
    printf("|start|->");
    while(ptr!=NULL){
        printf("|%d|->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
}
int main(){
    int choice;
    char ch;
    do{
        printf("\n1.Insert at the beg\n");
        printf("2.Insert at the end\n");
        printf("3.Insert at the loc\n");
        printf("4.Delete first node");
        printf("\n5.Delete last node");
        printf("\n6.Delete at loc");
        printf("\n7.Search node value");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:start=insert_at_beg(start);
            break;
        case 2:start=insert_at_end(start);
            break;
        case 3:start=insert_at_loc(start);
            break;
        case 4:start=delete_first(start);
        break;
        case 5:start=delete_last(start);
        break;
        case 6:start=delete_At_loc(start);
        break;
        case 7:searchData(start);
        break;
        default:printf("Wrong choice by user.\n");
            break;
        }
        printf("\nDo you want to continue(y/n): ");
        ch=getche();
    }while(ch=='y'||ch=='Y');
}
struct Node *insert_at_beg(struct Node *start){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data: ");
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
struct Node *insert_at_end(struct Node *start){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the data: ");
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
    printList(start);
    return start;
}
struct Node *insert_at_loc(struct Node *start){
    printList(start);
    int value;
    printf("\nEnter the node value after which you want to insert new node value: ");
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
        printf("Insertion is not possible.The Given Node value is not found\n");
    }else{
        printf("Enter the new node value\n");
        struct Node *temp;
        temp=(struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&temp->data);
        temp->next=ptr->next;
        ptr->next=temp;                        
    }
    printList(start);
    return start;
}
struct Node *delete_first(struct Node *start){
    if(start==NULL){
        printf("\nList is empty .NO deletion possible");
    }else{
        struct Node *temp;
        temp=start;
        start=start->next;
        printf("|%d| is deleted\n",temp->data);
        free(temp);
        printList(start);
    }
    return start;
}
struct Node *delete_last(struct Node *start){
    if(start==NULL){
        printf("\nList is empty. No deletion possible");
    }else if(start->next==NULL){
        printf("\n|%d| is deleted",start->data);
        free(start);
        start=NULL;
    }else{
        struct Node *ptr;
        struct Node *prev=NULL;
        ptr=start;
        while(ptr->next!=NULL){
            prev=ptr;
            ptr=ptr->next;
        }
        printf("\n|%d| is deleted\n",ptr->data);
        free(ptr);
        prev->next=NULL;
        printList(start);
    }
    return start;
}
struct Node *delete_At_loc(struct Node *start){
    printList(start);
   int value;
   printf("\nEnter the data to be deleted: ");
   scanf("%d",&value);
        struct Node *temp,*prev;
        temp=start;
        if(value==temp->data){
            start=delete_first(start);
            return start;
        }
        else{
            while(temp!=NULL){
                if(value==temp->data){
                    break;
                }else{
                    prev=temp;
                    temp=temp->next;
                }
            }
            if(temp==NULL){
                printf("\nNode not found");
            }else{
                prev->next=temp->next;
                printf("\n|%d| is deleted\n",temp->data);
                free(temp);
                printList(start);
            }
            return start;
        }
    
}
void searchData(struct Node *start){
    printList(start);
    int data;
    printf("\nEnter the data to search: ");
    scanf("%d",&data);
    int pos=0;
    struct Node *temp;
    temp=start;
    while(temp!=NULL){
        pos++;
        if(data==temp->data){
            break;
        }else{
            temp=temp->next;
        }
    }
    if(temp==NULL){
        printf("\nData not found");
    }else{
        printf("%d is found at : %d",temp->data,pos);
    }
}