#include<stdio.h>
int main()
{
    int i,x,n,d,c=0;
    scanf("%d", &x);
    for(i=0; i<x; i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            c=1;

        }
        else
        {

            for(  ; n>0; n=n/10)
            {

                c=c+1;
            }




        }
         printf("%d\n",c);
         c=0;

    }
    return 0;
}
