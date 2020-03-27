#include<stdio.h>
int sum_digits(int x);
int main()
{
    int a,b;
    printf("Enter a number : ");
    scanf("%d", &a);
    b=sum_digits(a);
    printf("The sum of the digits is %d", b);
    return 0;
}
int sum_digits(int x)
{
    int s;
    if(x!=0)
    {
        s=(x%10)+sum_digits(x/10);
        return s;
    }
    else
        return 0;
}
