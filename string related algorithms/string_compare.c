#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[10],s2[10];
    int i=0,L1,L2;
    printf("Enter two strings:\n");
    gets(s1);
    gets(s2);
    L1=strlen(s1);
    L2=strlen(s2);
    if(L1!=L2)
    {
        printf("strings are not equal");
        getch();
        exit(0);
    }
    while(i<L1)
    {
        if(s1[i]!=s2[i])
        {
            printf("Strings are not equal");
            getch();
            exit(0);
        }
        i++;
    }
    printf("Strings are equal");
    getch();
}
