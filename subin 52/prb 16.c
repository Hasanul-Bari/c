#include<stdio.h>
int main()
{
    int n,m,i,j,k;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &m);
        for(j=0; j<m; j++)
        {
            for(k=0; k<m; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
