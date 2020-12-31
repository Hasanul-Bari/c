#include<stdio.h>
int main()
{
    int ary[5],i,j,max,min,n;
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        for(i=0; i<5; i++)
        {
            scanf("%d",&ary[i]);
        }
        max=ary[0];
        min=ary[0];
        for(i=0; i<5; i++)
        {
            if(max<ary[i])
            {
                max=ary[i];
            }
            if(min>ary[i])
            {
                min=ary[i];
            }
        }
        printf("%d %d\n",max,min);
    }
    return 0;



}
