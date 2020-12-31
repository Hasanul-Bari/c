#include<stdio.h>
int main()
{
    int i,j,n,k,ary[10],c=0,p=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<10; j++)
        {
            scanf("%d",&ary[j]);
        }
        for(j=0; j<10; j++)
        {
            for(k=2; k<ary[j]; k++)
            {
                if(ary[j]%k==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                p=p+1;
            }
        }
        printf("%d", p);
        p=0;


    }

    return 0;

}




