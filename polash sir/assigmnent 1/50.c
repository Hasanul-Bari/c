#include<stdio.h>

int main(void)
{
    int n, i, sum;
    printf("Enter the value of n:");
    scanf("%d", &n);

    for(i=1, sum=0; i<=n; i=i+2)
    {
        sum=sum+(i*i);
    }
    printf("The sum of the series is %d", sum);
    return 0;
}
