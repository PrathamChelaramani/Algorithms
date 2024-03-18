#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[10],s2[10];
    int i=0,j=0,num,pos;
    printf("Enter string:");
    gets(s1);
    printf("Enter position after you want deletion:");
    scanf("%d",&pos);
    printf("Enter number of characters for deletion:");
    scanf("%d",&num);
    while(i<pos)
    {
        s2[j]=s1[i];
        i++;
        j++;
    }
    while(num>0)
    {
        num--;
        i++;
    }
    while(s1[i]!=NULL)
    {
        s2[j]=s1[i];
        i++;
        j++;
    }
    s2[j]=NULL;
    printf("String after deletion is:%s",s2);
    getch();
}
