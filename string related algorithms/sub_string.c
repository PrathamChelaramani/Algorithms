#include<stdio.h>
#include<conio.h>
void main()
{
    char s[20],sub[20];
    int i=0,num,pos;
    printf("Enter string:");
    gets(s);
    printf("Enter starting position of substring:");
    scanf("%d",&pos);
    printf("Enter number of characters for substring:");
    scanf("%d",&num);
    pos = pos-1;
    while(num>0)
    {
        sub[i]=s[pos];
        i++;
        pos++;
        num--;
    }
    sub[i]=NULL;
    printf("Substring is:%s",sub);
    getch();
}
