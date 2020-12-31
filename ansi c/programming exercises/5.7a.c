#include<stdio.h>
int main(void)
{
    int i,j,a=1;
    for(i=1; i<14;i++)
    {
        for(j=1; j<=i; j++)
        {
           printf("%d\t",a);
           a++;
        }
        printf("\n");

    }

    return 0;
}

