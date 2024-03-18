#include<stdio.h>
#include<conio.h>
void main()
{
    char str[10];
    int count = 0;
    printf("Enter string:");
    gets(str);
    while(str[count]!=NULL)
    {
        count++;
    }
    printf("Length of the string is:%d",count);
    getch();
}
