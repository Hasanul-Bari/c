#include<stdio.h>
#define pi 3.1416

int main(void)
{
    float d, P, A;
    printf("Enter the diameter(in cm) of a circle:\n");
    scanf("%f",&d);
    P=pi*d;
    A=(pi*d*d)/4;
    printf("The perimeter of the circle is %.2f cm\n The area of the circle is %.2f cm", P, A);


    return 0;


}
