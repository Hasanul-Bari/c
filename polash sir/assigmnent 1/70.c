#include<stdio.h>

int main(void)
{
    int X, S;
    printf("Enter a number:");
    scanf("%d", &X);

    for(S=0; X>0; X=X/10)
    {
        S=S*10;
        S=S+(X%10);
    }
    printf("The reverse of the number is %d", S);
    return 0;
}
