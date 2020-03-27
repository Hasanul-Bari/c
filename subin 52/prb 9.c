#include<stdio.h>
int main()
{
    int n,i,j,m,sum=0,ary[1000];
    float avg;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&m);
        for(j=0; j<m; j++)
        {
            scanf("%d", &ary[j]);
        }
        for(j=0;j<m;j++)
        {
           sum=sum+ary[j];
        }
        avg=sum/(m*1.0);
        printf("%0.2f\n",avg);
        sum=0;
    }


    return 0;

}

