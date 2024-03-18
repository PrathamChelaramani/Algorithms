#include<stdio.h>
#include<conio.h>
void main()
{
    int mat[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter elements of mat[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nRow major order:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
    getch();
}
