#include<stdio.h>
#include<conio.h>
void main()
{
    char s1[10],s2[10],s3[20];
    int count1=0,count2=0,count3=0;
    printf("Enter two strings:");
    gets(s1);
    gets(s2);
    while(s1[count1]!=NULL)
    {
        s3[count3]=s1[count1];
        count1++;
        count3++;
    }
    s3[count3]="";
    count3++;
    while(s2[count2]!=NULL)
    {
        s3[count3]=s2[count2];
        count2++;
        count3++;
    }
    s3[count3]=NULL;
    printf("Concatenated string is:%s",s3);
    getch();
}
