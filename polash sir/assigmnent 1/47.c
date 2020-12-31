#include<stdio.h>

int main(void)
{
    int n, i, m;
    printf("Enter an integer number:");
    scanf("%d", &n);

    for(i=1; i<=10; i=i+1)
    {
        m=n*i;
        printf("%d X %d =%d\n", n, i, m);
    }

    return 0;
}
