#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char org[10],rev[10];
    int len,count=0;
    printf("Enter string:");
    gets(org);
    len = strlen(org);
    len=len-1;
    while(len>=0)
    {
        rev[count]=org[len];
        count++;
        len--;
    }
    rev[count]=NULL;
    printf("Reversed string is:%s",rev);
    getch();
}
