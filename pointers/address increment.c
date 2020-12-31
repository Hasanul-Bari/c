#include<stdio.h>
int main()
{
    int x, *p=&x;
    scanf("%d",&x);

    printf("%d %d %d \n", x,*p,p);

    (*p)++;
    printf("%d %d %d ", x,*p,p);

    return 0;
}
