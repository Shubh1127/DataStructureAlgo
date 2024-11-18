#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *top=NULL;
void push();
void pop();
void display();

int main(){
    int choice;
    char ch;
    do{
        printf("\n1.for push operation");
        printf("\n2. pop operation");
        printf("\n3. for displaying");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:push();
                break;
            case 2:pop();
                break;
            case 3:display();
                break;
            default:printf("\nWrong choice by user");
        }
        printf("\nDO you want to continiue (y/n)?: ");
        ch=getche();
    }while(ch=='y'|| ch=='Y');
}
void push(){
   struct Node *ptr=malloc(sizeof(struct Node));
   printf("\nEnter the data into stack: ");
   scanf("%d",&ptr->data);
   if(top==NULL){
        ptr->next=NULL;
        top=ptr;
        display();
   }else{
    ptr->next=top;
    top=ptr;
    display();
   }

}
void pop(){
    struct Node *temp;
    temp=top;
    if(temp==NULL){
        printf("\nStack is underflow");
    }else{
        top=top->next;
        printf("\n%d is POP from stack",temp->data);
        free(temp);
        display();
    }
}
void display(){
    struct Node *ptr=top;
    if(ptr==NULL){
        printf("\nStack is underflow");
    }else{
        printf("\nTOP\n");
        while(ptr!=NULL){
            printf("[%d]\n",ptr->data);
            ptr=ptr->next;
        }
    }
}