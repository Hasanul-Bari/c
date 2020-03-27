#include<stdio.h>

int main(void)
{
    int x,y;
    printf("Enter the height(in meter) of two persons:\n");
    scanf("%d %d",&x, &y);
    if(x>y)
    {
        printf("The first person is taller than the second");
    }
    else
    {
        printf("The second person is taller than the first", y);
    }
    return 0;

}
