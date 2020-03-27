#include<stdio.h>
int main()
{
    int m=5,n=9,x,y,z;
    x    =++m-++n*--m;
    printf("%d\n",x);
    y    =++m*n++;
    printf("%d\n",y);
    z    =++m*n--+n++;
    printf("%d",z);
    return 0;
}
