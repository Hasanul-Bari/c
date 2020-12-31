#include<stdio.h>
int main(viod)
{
    int x,y,z;
    printf("Enter three integers");
    scanf("%d %d %d",&x, &y,&z);

    ((x>y)&&(x>z)) ? printf("%d is large",x) : ((y>x)&&(y>z)) ? printf("%d is large",y) : printf("%d is large",z);

    return 0;
}
