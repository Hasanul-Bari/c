/// sum of the digits of a number using recursion

#include<stdio.h>
int sum(int n)
{
    int s=0;
    while(n!=0){
        int r=n%10;
        s=s+r;
        n=n/10;
    }
    return s;
}
main()
{
    int n,s;
    scanf("%d",&n);
    s=sum(n);
    printf("%d",s);
}

