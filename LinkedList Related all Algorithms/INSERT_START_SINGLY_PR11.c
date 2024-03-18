#include<stdio.h>
#include<stdlib.h>
void beginsert(int);
struct node
{
    int data;
    struct node *link;
};
struct node *first;
void main ()
{
    int choice,item;
    do
    {
        printf("\nEnter the item which you want to insert?\n");
        scanf("%d",&item);
        beginsert(item);
        printf("\nPress 0 to insert more ?\n");
        scanf("%d",&choice);
    }while(choice == 0);
}
void beginsert(int item)
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));
        if(ptr == NULL)
        {
            printf("\nOVERFLOW\n");
        }
        else
        {
            ptr->data = item;
            ptr->link = first;
            first = ptr;
            printf("\nNode inserted\n");
        }

    }
