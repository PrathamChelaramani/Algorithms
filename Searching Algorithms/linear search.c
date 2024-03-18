#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,x,array[50];
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter %d Elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter value to search:\n");
    scanf("%d",&x);
    i = 0;
    while(i<n)
    {
        if(array[i] == x)
        {
            printf("Element found at index:%d",i+1);
            getch();
            exit(0);
        }
        i++;
    }
    printf("Element not found");
    getch();
}
