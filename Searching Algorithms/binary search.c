#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,x,low,mid,high,array[50];
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter %d Elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter value to search:");
    scanf("%d",&x);
    low = 1;
    high = n-1;
    while(low<=high)
    {
        mid = low + (high-low) / 2;
        if(x<array[mid])
        {
            high=mid-1;
        }
        else if(x>array[mid])
        {
            low=mid+1;
        }
        else{
            printf("Element found at index:%d",mid+1);
            getch();
            exit(0);
        }
    }
    printf("Element not found");
    getch();
}
