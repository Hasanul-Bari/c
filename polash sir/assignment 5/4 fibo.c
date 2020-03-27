#include<stdio.h>
int nth_fibo(int x);
int main()
{
    int a,f;
    printf("Enter a number:\t");
    scanf("%d",&a);
    f=nth_fibo(a);
    printf("\nThe %dth Fibonacci number is %d\n", a,f);

    return 0;

}
int nth_fibo(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return (nth_fibo(x-1)+nth_fibo(x-2));
}
