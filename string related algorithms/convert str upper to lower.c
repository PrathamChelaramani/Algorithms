#include<stdio.h>
#include<conio.h>
void main()
{
    char s1[10],s2[10];
    int i = 0;
    printf("Enter string:");
    gets(s1);
    while(s1[i]!=NULL)
    {
        if(s1[i]>='A' && s1[i]<='Z')
            s2[i]=s1[i]+32;
            i++;
    }
    s2[i]=NULL;
    printf("Converted string is:%s",s2);
    getch();
}
