#include<stdio.h>

int main(void)
{
    int n, i;
    long long int F=1;
    printf("Enter a number:");
    scanf("%d", &n);

    for(i=1 ; i<=n; i=i+1)
    {
        F=F*i;
    }
    printf("The factorial of %d is %lld", n, F);
    return 0;
}
