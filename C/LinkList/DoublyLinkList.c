#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *start = NULL;
struct Node *last = NULL;
struct Node *Insert_First(struct Node *);
struct Node *Insert_Last(struct Node *);
struct Node *Insert_Loc(struct Node *);
struct Node *Delete_First(struct Node *);
struct Node *Delete_Last(struct Node *);
struct Node *Delete_Loc(struct Node *);
void traverseListForward(struct Node *);
void traverseListBackward(struct Node *);
int main()
{
    int choice;
    char ch;
    do
    {
        printf("\n1.Insertion at Beginning");
        printf("\n2.Insertion at End");
        printf("\n3.Insertion at Location");
        printf("\n4.Delete First Node");
        printf("\n5.Delete Last Node");
        printf("\n6.Delete Any Node");
        printf("\n7.Traverse in Forward Direction");
        printf("\n7.Traverse in Backward Direction");
        printf("\nEnter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            start = Insert_First(start);
            break;
        case 2:
            start = Insert_Last(start);
            break;
        case 3:
            start = Insert_Loc(start);
            break;
        case 4:
            start = Delete_First(start);
            break;
        case 5:
            start = Delete_Last(start);
            break;
        case 6:
            start = Delete_Loc(start);
            break;
        default:
            printf("\nWrong choice by user");
        }
        printf("\nDo you want to continue(y/n)?: ");
        ch = getche();
    } while (ch == 'y' || ch == 'Y');
}
void traverseListForward(struct Node *start)
{
    if (start == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        struct Node *ptr;
        ptr = start;
        printf("\n|start|");
        while (ptr != NULL)
        {
            printf("<-|%d|->", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL");
    }
}
void traverseListBackward(struct Node *last)
{
    if (last == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        struct Node *ptr;
        ptr = last;
        printf("\nNULL");
        while (ptr != NULL)
        {
            printf("<-|%d|->", ptr->data);
            ptr = ptr->prev;
        }
        printf("|Start|");
    }
}
struct Node *Insert_First(struct Node *start)
{
    struct Node *temp;
    temp = malloc(sizeof(struct Node));
    printf("\nEnter your data: ");
    scanf("%d", &temp->data);
    if (start == NULL)
    {
        start = temp;
        start->prev = NULL;
        start->next = NULL;
        last = temp;
    }
    else
    {
        temp->next = start;
        temp->prev = NULL;
        start->prev = temp;
        start = temp;
    }
    traverseListForward(start);
    traverseListBackward(last);
    return start;
}
struct Node *Insert_Last(struct Node *start)
{
    struct Node *temp = malloc(sizeof(struct Node));
    ;
    printf("\nEnter you data: ");
    scanf("%d", &temp->data);
    if (start == NULL)
    {
        temp->next = NULL;
        temp->prev = NULL;
        start = temp;
        last = temp;
    }
    else
    {
        temp->next = NULL;
        temp->prev = last;
        last->next = temp;
        last = temp;
    }
    traverseListForward(start);
    traverseListBackward(last);
    return start;
}
struct Node *Insert_Loc(struct Node *start)
{
    struct Node *temp = malloc(sizeof(struct Node));
    if (start == NULL)
    {
        printf("\nEnter your data: ");
        scanf("%d", &temp->data);
        temp->prev = NULL;
        temp->next = NULL;
        start = temp;
        last = temp;
    }
    else
    {
        int value;
        printf("\nEnter the node after which you want to insert new node: ");
        scanf("%d", &value);
        printf("\nEnter the data: ");
        scanf("%d", &temp->data);
        struct Node *ptr = start;
        while (ptr != NULL)
        {
            if (value == ptr->data)
            {
                break;
            }
            else
            {
                ptr = ptr->next;
            }
        }
        if (ptr == NULL)
        {
            printf("\nInsertion not possible.Node not found");
        }
        else
        {
            temp->next = ptr->next;
            temp->prev = ptr;
            ptr->next = temp;

            if (temp->next != NULL)
            {
                temp->next->prev = temp;
            }
            else
            {
                last = temp;
            }
        }
    }
    traverseListForward(start);
    traverseListBackward(last);
    return start;
}
struct Node *Delete_First(struct Node *start)
{
    if (start == NULL)
    {
        printf("\nList is empty.No deletion possible");
        return start;
    }else if(start->next==NULL){
        traverseListForward(start);
        printf("\n|%d| is deleted",start->data);
        free(start);
        start=NULL;
        last=NULL;
        return start;
    }
    else
    {
        struct Node *ptr = start;
        start = start->next;
        start->prev = NULL;
        printf("\n|%d| is deleted", ptr->data);
        free(ptr);
    traverseListForward(start);
    traverseListBackward(last);
    return start;
    }
}
struct Node *Delete_Last(struct Node *start)
{

    if (start == NULL)
    {
        printf("\nList is empty.No deletion possible");
    }
    else if (start->next == NULL)
    {
        printf("\n|%d| is deleted", start->data);
        free(start);
        start = NULL;
        last = NULL;
    }
    else
    {
        struct Node *ptr = last;
        last = last->prev;
        last->next = NULL;
        printf("\n|%d| is deleted", ptr->data);
        free(ptr);
    }
    traverseListForward(start);
    traverseListBackward(last);
    return start;
}
struct Node *Delete_Loc(struct Node *start)
{
    if (start == NULL)
    {
        printf("\nList is empty.No deletion possible");
        return start;
    }else if(start->next==NULL){
        printf("\n|%d| is deleted",start->data);
        free(start);
        start=NULL;
        last=NULL;
        traverseListForward(start);
        printf(" NOW");
        return start;
    }
    else
    {
        int value;
        traverseListForward(start);
        printf("\nEnter the node which you want to delete: ");
        scanf("%d", &value);
        struct Node *ptr = start;
        while (ptr != NULL)
        {
            if (ptr == start && value == ptr->data)
            {
                start = Delete_First(start);
                return start;
            }
            else if (ptr == last && value == ptr->data)
            {
                start = Delete_Last(start);
                return start;
            }
            else if (value == ptr->data)
            {
                break;
            }
            ptr = ptr->next;
        }
            if (ptr == NULL)
            {
                printf("\nNo deletion possible as Node not found");
            }
            else
            {
                ptr->prev->next = ptr->next;
                ptr->next->prev = ptr->prev;
                printf("\n|%d| is deleted", ptr->data);
                free(ptr);
            }
            traverseListForward(start);
            traverseListBackward(last);
            return start;
    }
}