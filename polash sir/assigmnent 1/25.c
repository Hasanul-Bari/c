#include<stdio.h>


int main(void)
{
    float b, h, A;
    printf("Enter two numbers denoting the length(in cm) of base and height of a triangle:\n");
    scanf("%f %f", &b, &h);
    A=(b*h)/2;
    printf("The area of the triangle is %.2f cm", A);


    return 0;


}
