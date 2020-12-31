#include<stdio.h>
int main(void)
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=x%2;
    if(y==0)
    {
        printf("The number %d is even",x);
    }
    else
    {
        printf("The number %d is odd",x);
    }
}
