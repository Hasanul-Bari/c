#include<stdio.h>

int main(void)
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x, &y);
    if(x>y)
    {
        printf("The largest number is %d", x);
    }
    else
    {
        printf("The largest number is %d", y);
    }
    return 0;

}
