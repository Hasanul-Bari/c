#include<stdio.h>
#include<math.h>

int main(void)
{
    float x, y, z, p, s, A;
    printf("Enter three number denoting the length(in cm) of three lines of any triangle:\n");
    scanf("%f %f %f", &x, &y, &z);
    p=x+y+z;
    s=p/2;
    A=sqrt(s*(s-x)*(s-y)*(s-z));
    printf("The perimeter of the triangle is %.2f cm\n The area of the triangle is %.2f cm", p, A);


    return 0;


}
