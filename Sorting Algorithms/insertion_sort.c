#include<stdio.h>
#include<conio.h>
void main()
{
    int k[10],i,j,n,key;
    printf("How many elments you want to sort:");
    scanf("%d",&n);
    printf("Enter Elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    i=1;
    while(i<n)
    {
        key=k[i];
        j=i-1;
        while(j>=0 && key<k[j])
        {
            k[j+1]=k[j];
            j--;
        }
        k[j+1]=key;
        i++;
    }
    printf("Data after sorting:");
    for(i=0;i<n;i++)
    {
        printf("%2d",k[i]);
    }
    getch();
}
