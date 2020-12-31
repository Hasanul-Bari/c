#include<stdio.h>
int main()
{
    int i,j,n,sum=0,avg,ary[5];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&ary[j]);
        }
        for(j=0; j<5; j++)
        {
            sum=sum+ary[j];
        }
        avg=sum/5;
        printf("%d\n",avg);
        sum=0;
    }
    return 0;

}
