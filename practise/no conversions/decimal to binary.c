#include<stdio.h>
int main()
{
    int a,sum=0,i,r;
    printf("Enter a decimal number:\t");
    scanf("%d", &a);

    i=1;

    while(a!=0)
    {
        r=a%2;
        sum=sum+r*i;

        a=a/2;
        i=i*10;

    }

    printf("The equivalent decimal no: %d",sum);

    return 0;
}
