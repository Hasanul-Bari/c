#include<stdio.h>

int main(void)
{
    int m, i;
    long int t1, t2, temp;
    printf("Enter m=");
    scanf("%d", &m);
    t1=1;
    t2=1;

    for(i=0 ;  i<m; i++)
    {
        printf("%ld\t", t1);
        temp=t1+t2;
        t1=t2;
        t2=temp;

    }

    return 0;
}
