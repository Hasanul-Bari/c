#include<stdio.h>

int main(void)
{
    int a, digit, sum=0;
    printf("Enter an integer number:");
    scanf("%d", &a);

    while(a!=0)
    {
        digit=a%10;
        sum=sum+digit;
        a=a/10;
    }
    printf("The sum of all constituent digits of the given number is %d", sum);
    return 0;
}
