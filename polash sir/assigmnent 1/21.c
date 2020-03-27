#include<stdio.h>
#include<math.h>
#define pi 3.1416

int main(void)
{
    float x,y,r,t;
    printf("Enter two numbers denoting the coordinate of a point in Cartesian system:\n");
    scanf("%f %f", &x, &y);
    r=sqrt((x*x)+(y*y));
    t=(atan(y/x))*(180/pi);
    printf("The equivalent coordinate point in polar system is (%.2f,%.2f)", r,t);

    return 0;

}
