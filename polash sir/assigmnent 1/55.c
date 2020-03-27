#include<stdio.h>

int main(void)
{
    float n, i, sum;
    printf("Enter the value of n:");
    scanf("%f", &n);

    for(i=2, sum=0; i<=n; i=i+2)
    {
        sum=sum+(1/(i*i));
    }
    printf("The sum of the series is %f", sum);
    return 0;
}
