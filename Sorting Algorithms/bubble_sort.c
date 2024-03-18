#include<stdio.h>
#include<conio.h>
int k[10],n;
void bubble_sort();
void main()
{
    int i;
    printf("How many elements you want to sort:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    printf("Data before sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%4d",k[i]);
    }
    bubble_sort();
    printf("\nData after sorting:");
    for(i=0;i<n;i++)
    {
        printf("%4d",k[i]);
    }
    getch();
}
void bubble_sort()
{
    int i,pass,temp,last,exch;
    last = n;
    for(pass =0;pass<n;pass++)
    {
        exch=0;
        for(i=0;i<last-1;i++)
        {
            if(k[i]>k[i+1])
            {
                temp=k[i];
                k[i]=k[i+1];
                k[i+1]=temp;
                exch++;
            }
        }
    }
    if(exch == 0)
        return;
    else
        last--;
    return 0;
}
