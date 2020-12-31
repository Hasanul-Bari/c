#include<stdio.h>
int main()
{
    int ary1[100][100],ary2[100][100],ary3[200][200],i,j,r1,c1,r2,c2,sum=0;
    printf("Enter the no of rows and columns 1st array:");
    scanf("%d %d", &r1,&c1);
    printf("\nEnter the elements of the 2D array:");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("\nary1[%d][%d]=", i,j);
            scanf("%d", &ary1[i][j]);
        }
    }

    printf("Enter the no of rows and columns 2nd array:");
    scanf("%d %d", &r2,&c2);
    printf("\nEnter the elements of the 2D array:");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("\nary2[%d][%d]=", i,j);
            scanf("%d", &ary2[i][j]);
        }
    }
