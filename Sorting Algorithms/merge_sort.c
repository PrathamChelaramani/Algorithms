#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,list1[3],list2[3],list3[6];
    printf("Enter elements for list1:\n");
    for(i=0;i<3;i++)
        scanf("%d",&list1[i]);
    printf("Enter elements for list2:\n");
    for(j=0;j<3;j++)
        scanf("%d",&list2[j]);
    i=0,j=0,k=0;
    while((i<3) && (j<3))
    {
        if(list1[i]<=list2[j])
        {
            list3[k]=list1[i];
            i++;
            k++;
        }
        else
        {
            list3[k]=list2[j];
            j++;
            k++;
        }
    }
    while(i<3)
    {
        list3[k]=list1[i];
        i++;
        k++;
    }
    while(j<3)
    {
        list3[k]=list2[j];
        j++;
        k++;
    }
    printf("\nData after sorting:");
    for(k=0;k<6;k++)
        printf("%4d",list3[k]);
    getch();
}
