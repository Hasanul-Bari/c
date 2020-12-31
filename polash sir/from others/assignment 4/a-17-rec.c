///sum of the digits
#include<stdio.h>
main()
{
    int n,x;
    scanf("%d",&n);
    printf("Sum of the digits %d\n",sum(n));
}
int sum (int n)
{
    int rem;
 rem=n%10;
 if(n!=0)
    return rem+sum(n/10);
    else return 0;
}

