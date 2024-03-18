#include<stdio.h>
#include<conio.h>
void main()
{
    char s1[20],s2[10];
    int count1=0,count2=0;
    printf("Enter string:");
    gets(s1);
    printf("Enter string to append:");
    gets(s2);
    while(s1[count1]!=NULL)
        count1++;
    while(s2[count2]!=NULL)
    {
        s1[count1]=s2[count2];
        count2++;
        count1++;
    }
    s1[count1]=NULL;
    printf("Appended string is:%s",s1);
    getch();
}
