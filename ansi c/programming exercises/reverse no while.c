#include<stdio.h>

int main(void)
{
    int a, S=0;
    printf("Enter an integer number:");
    scanf("%d", &a);

    while(a!=0)
    {
        S=S*10;
        S=S+(a%10);
        a=a/10;
    }
    printf("The reverse of the number is %d", S);
    return 0;
}

