///integer to binary using recursion

#include<stdio.h>
long bin(int x);
main()
{
    int x;
    long y;
    printf("Enter the ineger number:\n");
    scanf("%d",&x);
    y=bin(x);
    printf("The binary number is %ld\n",y);
}
long bin(int x)
{
    if(x==0)return 0;
    else return x%2+10*bin(x/2);
}
