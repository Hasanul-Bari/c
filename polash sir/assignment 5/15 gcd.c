#include<stdio.h>
int gcd(int x, int y);
int main()
{
    int a,b,g;
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);
    g=gcd(a,b);
    printf("The gcd is %d", g);
    return 0;
}
int gcd(int x, int y)
{
    while(x!=y)
    {
        if(x>y)
            return gcd(x-y,y);
        else
            return gcd(x,y-x);
    }
    return x;
}

