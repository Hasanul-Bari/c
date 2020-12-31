#include<stdio.h>
int main()
{
    int x,**p2,*p1;
    x=10;
    p1=&x;
    p2=&p1;

    printf("%d %d\n",*p1,**p2);



    return 0;
}
