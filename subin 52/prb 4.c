#include<stdio.h>
int main()
{
    int a,b ,c,i,v=1,d;
    scanf("%d", &d);
    for(i=1; i<=d; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        v=a*b*c;
        printf("%d\n",v);
        v=1;
    }
    return 0;

}

