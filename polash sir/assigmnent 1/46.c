#include<stdio.h>

int main(void)
{
    int n, x, i, m;
    printf("Enter n=");
    scanf("%d", &n);
    printf("Enter x=");
    scanf("%d", &x);

    for(i=0, m=0; m<=n; i=i+1)
    {
        m=x*i;
        printf("%d\n", m);
    }

    return 0;
}
