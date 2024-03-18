#include<stdio.h>
#include<conio.h>
void quick_sort(int [],int,int);
void main()
{
    int k[10],i,n,lb,ub;
    printf("Enter elements to sort:");
    scanf("%d",&n);
    printf("Enter elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    quick_sort(k,0,n-1);
    printf("Data after sorting:");
    for(i=0;i<n;i++)
    {
        printf("%2d",k[i]);
    }
    getch();
}
void quick_sort(int k[10],int lb,int ub)
{
    int i,j,temp,key;
    if(lb<ub)
    {
        i=lb;
        j=ub+1;
        key=lb;
        while(i<j)
        {
            while(k[i]<k[key])
                i++;
                j--;
            while(k[j]>k[key])
                j--;
            if(i<j)
            {
                temp=k[i];
                k[i]=k[j];
                k[j]=temp;
            }
        }
        temp=k[key];
        k[key]=k[j];
        k[j]=temp;
        quick_sort(k,lb,j-1);
        quick_sort(k,j+1,ub);
    }
}
