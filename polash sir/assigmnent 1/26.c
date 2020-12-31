#include<stdio.h>


int main(void)
{
    float a, b, A;
    printf("Enter two numbers denoting the length(in cm) of two lines of any rectangle:\n");
    scanf("%f %f", &a, &b);
    A=a*b;
    printf("The area of the rectangle is %.2f cm", A);


    return 0;


}
