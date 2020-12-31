#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,k,r1,r2,c1,c2;
    printf("Enter rows and columns of first matix = ");
    scanf("%d %d", &r1,&c1);
    printf("Enter the elements:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix = ");
    scanf("%d %d", &r2,&c2);
    if(c2!=r1)
    {
        printf("\nEntered matrix can't be multiplied\n");
    }

    printf("Enter the elements:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            c[i][j]=0;
            for(k=0; k<r2; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("\nThe resulted matrix  is :\n");
    for(i=0; i<r1; i++)
    {
        printf("\n");
        for(j=0; j<c2; j++)
        {
            printf(" %d ",c[i][j]);
        }
    }

    return 0;



}

