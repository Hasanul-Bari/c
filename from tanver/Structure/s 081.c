///use of global variable


#include<stdio.h>
int m,n,o,p;
void abc(int a,int b)
{
    m=a+b;
    n=a-b;
    o=a*b;
    p=a/b;
}

int main()
{
    int sum,sub,mult,div;
    int a,b;
    a=6,b=2;
    abc(a,b);
    sum=m,sub=n,mult=o,div=p;
    printf("SUM=%d\n",sum);
    printf("SUB=%d\n",sub);
    printf("MULT=%d\n",mult);
    printf("DIV=%d\n",div);
}

