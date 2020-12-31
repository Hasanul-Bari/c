#include<stdio.h>

int main(void)
{
    int a, S;
    printf("Enter an integer number:");
    scanf("%d", &a);

    for(S=0; a!=0; a=a/10 )
    {
        S=S*10;
        S=S+(a%10);
    }
    printf("The reverse of the number is %d", S);
    return 0;
}
