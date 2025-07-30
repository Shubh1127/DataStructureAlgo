#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node{
    int info;
    struct Node *left;
    struct Node *right;
};
struct Node *root=NULL;
void preorder(struct Node*);
void postorder(struct Node*);
void inorder(struct Node *);
void insert(struct Node *,struct Node*);
struct Node *getNode();
void create();
int main(){
    int choice;
    char ch;
    do{ 
        printf("\n1.Create/Insert Node in Tree");
        printf("\n2.Pre order traversing");
        printf("\n3.Post order traversing");
        printf("\n4.In order traversing");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:create();
                break;
            case 2:preorder(root);
                break;
            case 3:postorder(root);
                break;
            case 4:inorder(root);
                break;
            default:printf("\nBad choice");
        }
            printf("\nDO you want to continue(y/n)?: ");
            ch=getche();
    }while(ch=='y' || ch=='Y');
}
struct Node *getNode(){
    struct Node *temp=malloc(sizeof(struct Node));
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void inorder(struct Node *ptr){
        if(ptr!=NULL){
            inorder(ptr->left);
            printf("\n|%d|",ptr->info);
            inorder(ptr->right);
        }
}
void preorder(struct Node *ptr){
    if(ptr!=NULL){
        printf("\n");
        printf("|%d| ",ptr->info);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void postorder(struct Node *ptr){
    if(ptr!=NULL){
        postorder(ptr->left);
        postorder(ptr->right);
        printf("|%d| ",ptr->info);
    }
}
void create(){
    struct Node *new;
    new=getNode();
    printf("\nEnter the data: ");
    scanf("%d",&new->info);
    if(root==NULL){
        root=new;
    }else{
        insert(root,new);
        printf("\nItem inserted");
    }
}
void insert(struct Node *root,struct Node *new){
    char ch;
    printf("\nWehere to insert Node(L/R) of %d",root->info);
    ch=getche();
    if(ch=='R' || ch=='r'){
        if(root->right==NULL){
            root->right=new;
        }else{
            insert(root->right,new);
        }
    }else if(ch=='L' || ch== 'l'){
        if(root->left==NULL){
            root->left=new;
        }else{
            insert(root->left,new);
        }
    }else{
        printf("\nBad choice");
    }
}