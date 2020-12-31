#include<stdio.h>

int main(void)
{
    int n, x, i, m=0;
    printf("Enter n=");
    scanf("%d", &n);
    printf("Enter x=");
    scanf("%d", &x);

    for(i=0 ; m<=n; ++i)
    {
        m=x*i;
        printf("%d\n", m);
    }

    return 0;
}
