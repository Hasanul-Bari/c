#include<stdio.h>
#include<math.h>
#define pi 3.14165

int main(void)
{
    float X, Y, g, v;
    printf("Enter the angle(in degree):");
    scanf("%f", &X);
    printf("Enter the value of radius(in meter):");
    scanf("%f", &Y);
    g=9.8;
    v=sqrt(Y*g*tan((X*pi)/180));
    printf("The required velocity is %.2f m/s", v);


    return 0;


}
