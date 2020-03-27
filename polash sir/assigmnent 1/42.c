#include<stdio.h>


int main(void)
{
    int a,b,x;
    printf("Enter a=");
    scanf("%d", &a);
    printf("Enter b=");
    scanf("%d", &b);
    x=a;
    a=b;
    b=x;
    printf("a=%d\nb=%d",a,b);


    return 0;


}
