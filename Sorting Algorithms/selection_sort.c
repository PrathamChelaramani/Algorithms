#include<stdio.h>
#include<conio.h>
int k[50],n;
void selection_sort();
void main()
{
    int i;
    printf("How many elements you want to sort:");
    scanf("%d",&n);
    printf("Enter elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    printf("Data before sorting:");
    for(i=0;i<n;i++)
    {
        printf("%4d",k[i]);
    }
    selection_sort();
    printf("\nData after sorting:");
    for(i=0;i<n;i++)
    {
        printf("%4d",k[i]);
    }
    getch();
}
void selection_sort()
{
    int i,pass,temp,min_index;
    for(pass=0;pass<n;pass++)
    {
        min_index=pass;
        for(i=pass+1;i<n;i++)
        {
            if(k[i]<k[min_index])
                min_index=i;
        }
        temp=k[pass];
        k[pass]=k[min_index];
        k[min_index]=temp;
    }
}
