#include<stdio.h>
int main()
{
    int a,sum=0,digit,base=1;
    printf("Enter a binary number:\t");
    scanf("%d", &a);

    while(a!=0)
    {
        digit=a%10;
        sum=sum+(digit*base);
        base=base*2;
        a=a/10;
    }

    printf("The equivalent decimal no: %d",sum);

    return 0;

}
