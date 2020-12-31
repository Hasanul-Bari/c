#include<stdio.h>
#include<math.h>
#define pi 3.1416

int main(void)
{
    float x,y,r,t;
    printf("Enter two numbers denoting the coordinate of a point in polar system:\n");
    scanf("%f %f", &r, &t);
    x=r*cos((t*pi)/180);
    y=r*sin((t*pi)/180);
    printf("The equivalent coordinate point in Cartesian system is (%.2f,%.2f)", x,y);

    return 0;

}
