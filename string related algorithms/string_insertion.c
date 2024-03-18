#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[10],s2[10],s3[20];
    int i=0,j=0,k=0,pos;
    printf("Enter string:");
    gets(s1);
    printf("Enter string to be inserted:");
    gets(s2);
    printf("Enter position after which string to insert:");
    scanf("%d",&pos);
    while(i<pos)
    {
        s3[k]=s1[i];
        i++;
        k++;
    }
    while(s2[j]!=NULL)
    {
        s3[k]=s2[j];
        j++;
        k++;
    }
    while(s1[i]!=NULL)
    {
        s3[k]=s1[i];
        i++;
        k++;
    }
    s3[k]=NULL;
    printf("Modified string is:%s",s3);
    getch();
}
