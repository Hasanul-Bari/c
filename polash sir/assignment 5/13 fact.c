#include<stdio.h>
int fact(int x);
int main()
{
    int a ,f;
    printf("Enter a number:");
    scanf("%d", &a);
    f=fact(a);
    printf("\nThe factorial of %d is %d", a, f);

    return 0;
}
int fact(int x)
{
    if(x==0 || x==1)
        return 1;
    else
        return (x*fact(x-1));
}
