#include<stdio.h>
int main()
{
    int ary[100][100],i,j,r,c,max;
    printf("Enter the no of rows and columns:");
    scanf("%d %d", &r,&c);
    printf("\nEnter the elements of 2D array:");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\nary[%d][%d]=", i,j);
            scanf("%d", &ary[i][j]);
        }
    }
    max=ary[0][0];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
           if(ary[i][j]>max)
           {
               max=ary[i][j];
           }
        }
    }
    printf("The max element of the 2D array is %d",max);

    return 0;

}

