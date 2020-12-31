#include<stdio.h>
int main(void)
{
    float taka,poisa;
    printf("Enter the value of the product in taka:");
    scanf("%f",&taka);
    poisa=taka*100;
    printf("The price of the product is %0.3f poisa",poisa);
    return 0;
}
