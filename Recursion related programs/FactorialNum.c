#include<stdio.h>
#include<conio.h>
long int fact(int);
void main()
{
    int num;
    long int factorial;
    printf("Enter your number:");
    scanf("%d",&num);
    factorial = fact(num);
    printf("Factorial value is:%2d",factorial);
    getch();
}
long int fact(int n)
{
    if(n == 0)
        return 1;
    else
        return (n*fact(n-1));
}
