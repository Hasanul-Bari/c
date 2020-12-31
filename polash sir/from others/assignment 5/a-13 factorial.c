///factorial using recursion
#include<stdio.h>
int fact(int n);
main()
{
    int n;
    printf("enter the number ;\n");
    scanf("%d",&n);
    int x=fact(n);
    printf("%d\n",x);
}
int fact(int n)
{
    if (n==0)
        return 1;
    else
        return n*fact(n-1);
}

