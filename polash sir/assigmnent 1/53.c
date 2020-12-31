#include<stdio.h>

int main(void)
{
    float n, i, sum;
    printf("Enter the value of n:");
    scanf("%f", &n);

    for(i=1, sum=0; i<=n; i=i+1)
    {
        sum=sum+(1/(i*i));
    }
    printf("The sum of the series is %.2f", sum);
    return 0;
}
