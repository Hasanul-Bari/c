#include<stdio.h>

int main(void)
{
    int n, i, sum=0;
    printf("Enter the value of n:");
    scanf("%d", &n);

    for(i=1; i<=n; i=i+2)
    {
        sum=sum+i;
    }
    printf("The sum of the series is %d", sum);
    return 0;
}
