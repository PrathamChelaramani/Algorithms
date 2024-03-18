#include<stdio.h>
#include<stdlib.h>
void lastinsert(int);
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
        lastinsert(item);
        printf("\nPress 0 to insert more ?\n");
        scanf("%d",&choice);
    }while(choice == 0);
}
void lastinsert(int item)
    {
        struct node *ptr = (struct node*)malloc(sizeof(struct node));
        struct node *temp;
        if(ptr == NULL)
        {
            printf("\nOVERFLOW");
        }
        else
        {
            ptr->data = item;
            if(first == NULL)
            {
                ptr -> link = NULL;
                first = ptr;
                printf("\nNode inserted");
            }
            else
            {
                temp = first;
                while (temp -> link != NULL)
                {
                    temp = temp -> link;
                }
                temp->link = ptr;
                ptr->link = NULL;
                printf("\nNode inserted");

            }
        }
    }
