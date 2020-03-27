///arithmetic operations using pointer and user defined functions
#include<stdio.h>

void abc(int a,int b,int *sum,int *sub,int *mult,float*div)
{
*sum=a+b;
    *sub=a-b;
    *mult=a*b;
    *div=a/(b/1.0);
}

int main()
{
    int sum,sub,mult;
    float div;
    int a,b;
 scanf("%d%d",&a,&b);
    abc(a,b,&sum,&sub,&mult,&div);

    printf("SUM=%d\n",sum);
    printf("SUB=%d\n",sub);
    printf("MULT=%d\n",mult);
    printf("DIV=%f\n",div);
}

