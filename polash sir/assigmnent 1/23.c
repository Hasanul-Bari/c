#include<stdio.h>
#include<math.h>

int main(void)
{
    float x1, y1, x2, y2, d;
    printf("Enter two numbers denoting the coordinate of a point in Cartesian system:\n");
    scanf("%f %f", &x1, &y1);
    printf("Enter two numbers denoting the coordinate of another point in Cartesian system:\n");
    scanf("%f %f", &x2, &y2);
    d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("The distance between the points is %.2f", d);

    return 0;

}
