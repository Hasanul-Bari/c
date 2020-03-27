#include<stdio.h>
#define pi 3.1416

int main(void)
{
    float r, P, A;
    printf("Enter the radius(in cm) of a circle:\n");
    scanf("%f",&r);
    P=2*pi*r;
    A=pi*r*r;
    printf("The perimeter of the circle is %.2f cm\n The area of the circle is %.2f cm", P, A);


    return 0;


}
