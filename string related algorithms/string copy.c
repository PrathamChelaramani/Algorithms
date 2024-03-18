#include<stdio.h>
#include<conio.h>
void main()
{
    char s1[10],s2[10];
    int count=0;
    printf("enter string:");
    gets(s1);
    while(s1[count]!=NULL)
    {
        s2[count]=s1[count];
        count++;
    }
    s2[count]=NULL;
    printf("Copied string is:%s",s2);
    getch();
}
