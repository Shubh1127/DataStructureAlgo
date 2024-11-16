#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 5
int stack[size];
int top=-1;
void push();
void pop();
void display();
int main(){
    int choice;
    char ch;
    do{
        printf("\n1. push elements into stack");
        printf("\n2. pop elements into stack");
        printf("\n3.print elements of stack");
        printf("\n\nEnter  your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            default:printf("\nWrong choice by user");
        }printf("\nDo you want to continue(y/n)?: ");
        ch=getche();
    }while(ch=='y' || ch=='Y');
}
void push(){
    if(top==size-1){
        printf("\nstack is overflow .push operation not possible");
    }
    int data;
    printf("\nEnter data to push into stack: ");
    scanf("%d",&data);
    ++top;
    stack[top]=data;
    printf("\n%d pushed into stack",data);
    display();
}
void pop(){
    if(top==-1){
        printf("\nstack is UNDERFLOW");
    }
    int item;
    item=stack[top];
    top=top-1; 
    printf("\n%d is pop out",item);
    display();
}
void display(){
    int i=top;
    printf("\nTOP\n");
    while(i>=0){
        printf("[%d]\n",stack[i]);
        i--;
    }
}