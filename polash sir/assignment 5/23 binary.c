#include<stdio.h>
int binary (int x);
int main()
{
    int a ,bin;
    printf("Enter a decimal number:");
    scanf("%d", &a);
    bin=binary(a);
    printf("\nThe binary equivalent of %d is %d", a, bin);

    return 0;
}
int binary(int x)
{
    if(x==0)
        return 0;
    else
        return ((x%2)+10*binary(x/2));
}
