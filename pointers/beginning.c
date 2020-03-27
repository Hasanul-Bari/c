#include<stdio.h>
int main()
{
    int a, *p;
    printf("Enter a number:\n");
    scanf("%d", &a);
    *p=&a;
    printf("*p=%d\na=%d\np=%d,&a=%d\n",*p,a,p,&a);
    return 0;
}
