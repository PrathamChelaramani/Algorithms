#include<stdio.h>
#include<conio.h>
int rear=-1,front=-1,q[5];
void qins(int val);
void qdel();
void display();
void main()
{
    int ch,val;
    while(1)
    {
        printf("1) insert\n2) delete\n3) display\n4) exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter value to insert:");
                scanf("%d",&val);
                qins(val);
                break;
            case 2:
                qdel();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice..");
                break;
        }
    }
    getch();
}
void qins(int val)
{
    if(rear>=5)
    {
        printf("Queue overflow");
        getch();
        exit(0);
    }
    rear++;
    q[rear]=val;
    if(front==-1)
    {
        front=0;
    }
}
void qdel()
{
    int val;
    if(front==-1)
    {
        printf("Queue underflow");
        getch();
        exit(0);
    }
    val=q[front];
    if(front==rear)
        front=rear=-1;
    else
        front++;
    printf("Deleted element from queue is:%d\n",val);
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is empty");
        return;
    }
    for(i=front;i<=rear;i++)
        printf("%d\n",q[i]);
    getch();
}
