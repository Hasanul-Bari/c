#include<stdio.h>
int main()
{
    int a,b, *p1 ,*p2;
    printf("Enter two number:\n");
    scanf("%d %d", &a ,&b);
    p1=&a;
    p2=&b;

    printf("*p1=%d\na=%d\np1=%d\n&a=%d\n",*p1,a,p1,&a);
    printf("*p2=%d\nb=%d\np2=%d\n&b=%d\n\n",*p2,b,p2,&b);

    p1=p2;

    printf("p1=p2\n\n");
    printf("*p1=%d\na=%d\np1=%d\n&a=%d\n",*p1,a,p1,&a);
    printf("*p2=%d\nb=%d\np2=%d\n&b=%d\n",*p2,b,p2,&b);
    return 0;
}
