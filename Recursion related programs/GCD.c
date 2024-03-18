#include<stdio.h>
#include<conio.h>
int gcd(int,int);
void main()
{
    int a,b,result;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    result = gcd(a,b);
    printf("Answer is:%d",result);
    getch();
}
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            return (gcd(a-b,b));
        else
            return (gcd(b-a,a));
    }
    return a;
}
