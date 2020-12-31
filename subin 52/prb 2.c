#include<stdio.h>
int main()
{
    int a,b,i,c=0,c1=0;
    scanf("%d",&a);
    for(i=1; i<=a;i++)
    {
        scanf("%d",&b);
        if(b>=0)
        {
            c++;
        }
        else
        {
            c1++;
        }
    }
    printf("%d %d", c,c1);
    return 0;
}
