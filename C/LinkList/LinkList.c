#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *start=NULL;
struct Node *insert_at_beg(struct Node *);
struct Node *insert_at_end(struct Node *);
struct Node *insert_at_loc(struct Node *);
struct Node *delete_at_beg(struct Node *);
struct Node *delete_at_end(struct Node *);
struct Node *delete_at_loc(struct Node *);
void printList(struct Node*);
int main(){
    int choice;
    char ch;
    do{
        printf("1.Insert at beg\n2.Insert at end\n3.Insert at loc\n4.Delete at beg\n5.delete at end\n6.delete at loc\n7.Print List\nEnter your choice: ");
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
            case 5:start=delete_at_end(start);
                break;
            case 6:start=delete_at_loc(start);
                break;
            case 7:printList(start);
                break;
            default:printf("Wrong choice");
        }
        printf("\nDo you want to continue(y/n)?: ");
        ch=getche();
    }while(ch=='y');
}
void printList(struct Node *start){
    if(start==NULL){
        printf("List is empty");
    }else{
        struct Node *ptr=start;
        printf("\n|start|->");
        while(ptr!=NULL){
            printf("|%d|->",ptr->data);
            ptr=ptr->next;
        }
        printf("|end|");
    }
}
struct Node *insert_at_beg(struct Node *start){
    struct Node *temp=malloc(sizeof(struct Node));
    printf("\nEnter the node: ");
    scanf("%d",&temp->data);
    if(start==NULL){
        start=temp;
        temp->next=NULL;
    }else {
        temp->next=start;
        start=temp;
    }
    printList(start);
    return start;
}
struct Node *insert_at_end(struct Node *start){
    struct Node *temp=malloc(sizeof(struct Node));
    printf("\nEnter the node: ");
    scanf("%d",&temp->data);
    if(start==NULL){
        start=temp;
        temp->next=NULL;
    }else{
        struct Node *ptr=start;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
        temp->next=NULL;
    }
    printList(start);
     return start;
}
struct Node *insert_at_loc(struct Node *start){
    if(start==NULL){
        start=insert_at_beg(start);
        return start;
    }else if(start->next==NULL){
        start=insert_at_end(start);
        return start;
    }else{
        int value;
        printList(start);
        printf("\nEnter the node after which you want to insert: ");
        scanf("%d",&value);
        struct Node *temp=malloc(sizeof(struct Node));
        struct Node *ptr=start;
        while(ptr!=NULL){
            if(ptr->data==value){
                break;
            }else{
                ptr=ptr->next;
            }
        }
        if(ptr==NULL){
            printf("\nNode not found");
        }else{
            printf("\nEnter the node: ");
            scanf("%d",&temp->data);
            temp->next=ptr->next;
            ptr->next=temp;
        }
        printList(start);
        return start;
    }
}
struct Node *delete_at_beg(struct Node *start){
    if(start==NULL){
        printf("\nList is empty");
    }else{
        struct Node *ptr=start;
        printf("\n|%d| is deleted",ptr->data);
        start=start->next;
        free(ptr);
    }
    printList(start);
    return start;
}
struct Node *delete_at_end(struct Node *start){
    if(start==NULL){
        printf("\nList is empty");
    }else{
        struct Node *ptr=start,*prev=NULL;
        while(ptr->next!=NULL){
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=NULL;
        printf("\n|%d| is deleted",ptr->data);
        free(ptr);
    }
    printList(start);
    return start;
}
struct Node *delete_at_loc(struct Node *start){
    if(start==NULL){
        printf("\nList is empty");
    }
    else{
        int value;
        printf("\nEnter the node which you want to delete: ");
        scanf("%d",&value);
        struct Node *ptr=start,*prev=NULL;
        if(ptr->data==value){
            start=delete_at_beg(start);
            return start;
        }else{
        while(ptr!=NULL){
            if(ptr->data==value){
                break;
            }else{
                prev=ptr;
                ptr=ptr->next;
            }
        }
        if(ptr==NULL){
            printf("\nNode not found");
        }else{
            prev->next=ptr->next;
            printf("\n|%d| is deleted",ptr->data);
            free(ptr);
        }
        }
        printList(start);
        return start;
    }
} 