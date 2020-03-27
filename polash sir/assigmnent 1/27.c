#include<stdio.h>


int main(void)
{
    float a, A;
    printf("Enter a number denoting the length(in cm) of a line of any square:\n");
    scanf("%f", &a);
    A=a*a;
    printf("The area of the square is %.2f cm", A);


    return 0;


}
