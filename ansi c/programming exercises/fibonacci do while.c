#include<stdio.h>

int main(void)
{
    int m, i, t1, t2, temp;
    printf("Enter m=");
    scanf("%d", &m);
    i=1;
    t1=1;
    t2=1;

    do
    {
        printf("%d\t", t1);
        temp=t1+t2;
        t1=t2;
        t2=temp;
        i=i+1;

    }
    while( i<=m);

    return 0;
}

