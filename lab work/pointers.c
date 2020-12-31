#include<stdio.h>
int main()
{
    int a=5,b=6,*p1;
    p1=&a;
    printf("%d %d",p1,*p1);
    return 0;
}
