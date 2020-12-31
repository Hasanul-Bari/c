///product of 2 numbers
#include<stdio.h>
int product (int a, int b);
main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    int pro=product(a,b);
    printf("The product of the two numbers: %d\n",pro);
}
int product(int a,int b)
{
    if(a<b)return product(b,a);
    else if(b!=0)return a+product(a,b-1);
    else return 0;
}
