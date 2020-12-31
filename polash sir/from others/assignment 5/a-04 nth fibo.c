///find the nth fibonacci number
#include<stdio.h>
int fib(int n)
{
    if(n==1||n==2) return n-1;
    else
        return fib(n-1)+fib(n-2);
}
main()
{
    int n;
    printf("Enter the n th position of the fibonacci series:\n");
    scanf("%d",&n);
    printf("The desired fibonacci number is %d\n",fib(n));
}
