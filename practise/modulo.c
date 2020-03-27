#include<stdio.h>

int main(void)
{
    int a,b, S;
    printf("Enter two integer number:");
    scanf("%d %d", &a,&b);
    S=a%b;

    printf("The modulo division is %d", S);
    return 0;
}
