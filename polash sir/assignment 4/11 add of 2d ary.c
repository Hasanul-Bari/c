#include<stdio.h>
int main()
{
    int ary[100][100],i,j,r,c,sum=0;
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
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
           sum=sum+ary[i][j];
        }
    }
    printf("Sum of the elements of the 2D array is %d",sum);

    return 0;

}
