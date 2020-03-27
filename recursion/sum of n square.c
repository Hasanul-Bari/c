#include<stdio.h>
int sum(int , int);
int main()
{
    int a,b,c;
    scanf("%d %d", &a,&b);
    c=sum(a,b);
    printf("%d",c);
    return 0;
}
int sum(int x ,int y)
{
    int s=0;
    if(x<=y)
    {
       s=(x*x)+sum(x+2,y);
    }
    return (s);
}

