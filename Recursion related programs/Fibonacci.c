#include<stdio.h>
#include<conio.h>
int fibo(int);
void main()
{
    int n,i=0;
    printf("Enter number of series you want:");
    scanf("%d",&n);
    while(i<n)
    {
        printf("%2d",fibo(i));
        i++;
    }
    getch();
}
int fibo(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return (fibo(n-1) + fibo(n-2));
}
