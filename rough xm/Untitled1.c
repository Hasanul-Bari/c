#include<stdio.h>
int main()
{
    int m=6,n=8,x,y,z;
    x    =n++;
    printf("%d\n",x);
    y    =++m*n++;
    printf("%d\n",y);
    z    =++m*n--+n++;
    printf("%d",z);
    return 0;
}
