#include<stdio.h>
int main(void)
{
    float taka,poisa;
    printf("Enter the value of the product in poisa:");
    scanf("%f",&poisa);
    taka=poisa/100;
    printf("The price of the product is %0.3f taka",taka);
    return 0;
}
