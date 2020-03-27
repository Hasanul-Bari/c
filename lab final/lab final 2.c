#include<stdio.h>
int main()
{
    int a[10][10][10],sum,avg,i,j,k,m,n,g,s=0,max;

    printf("Enter the size of the  3d array\n");

    scanf("%d %d %d",&m ,&n, &g);

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            for(k=0; k<g; k++)
            {
                printf("a[%d][%d][%d]=\t",i+1,j+1,k+1);
                scanf("%d",&a[i][j][k]);
            }
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            for(k=0; k<g; k++)

            {
                s=s+a[i][j][k];
            }
        }
    }
    printf("\nThe sum of the elements is %d\n",s);

    max=a[0][0][0];

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            for(k=0; k<g; k++)

            {
                if(max<a[i][j][k])
                    max=a[i][j][k];
            }
        }
    }

    printf("\nThe maximum  elements is %d\n",max);





    return 0;



}
