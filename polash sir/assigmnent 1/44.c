#include<stdio.h>

int main(void)
{
    int n, i;
    printf("Enter a number:");
    scanf("%d", &n);
    for(i=2; i<=n; i=i+2)
    {
        printf("%d\n", i);
    }

    return 0;
}
