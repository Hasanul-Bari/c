#include<stdio.h>
int main()
{
    int sid[5],sm[5],i,j;
    for(i=1; i<=5; i++)
    {
        scanf("%d %d",&sid[i],&sm[i]);
    }
        for(i=1; i<=5; i++)
        {
            if(sid[i]%2==0)
            {
                if(sm[i]>=80)
                {
                    printf("%d 4.0\n",sid[i]);
                }
                else if(sm[i]>=75)
                {
                    printf("%d 3.5\n",sid[i]);
                }
                else if(sm[i]>=70)
                {
                    printf("%d 3.0\n",sid[i]);
                }
                else if(sm[i]>=65)
                {
                    printf("%d 2.5\n",sid[i]);
                }
                else
                {
                    printf("%d fail\n",sid[i]);
                }
            }
        }
     for(i=1; i<=5 ; i++)
    {
        if(sid[i]%2==1)
        {
            if(sm[i]>=80)
            {
                printf("%d 4.0\n",sid[i]);
            }
            else if(sm[i]>=75)
            {
                printf("%d 3.5\n",sid[i]);
            }
            else if(sm[i]>=70)
            {
                printf("%d 3.0\n",sid[i]);
            }
            else if(sm[i]>=65)
            {
                printf("%d 2.5\n",sid[i]);
            }
            else
            {
                printf("%d fail\n",sid[i]);
            }
        }
    }

}
