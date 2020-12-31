#include<stdio.h>
#include<math.h>
#define pi 3.14165

int main(void)
{
    float V, A, H, t1, R, t2, T, g, x;
    printf("Enter the value of velocity:");
    scanf("%f", &V);
    printf("Enter the angle(in degree):");
    scanf("%f", &A);
    g=9.8;

    //we need to convert the angle radian to degree
    x=(A*pi)/180;

    H=((V*V)*(sin(x))*(sin(x))/(2*g));
    t1=(V*sin(x))/g;
    R=((V*V)*2*sin(x)*cos(x))/g;
    t2=(V*sin(x))/g;
    T=(2*V*sin(x))/g;
    printf("Maximum height:%.2f\n", H);
    printf("Time to reach at maximum height:%.2f\n", t1);
    printf("Horizontal Range:%.2f\n", R);
    printf("Time to come back at ground:%.2f\n", t2);
    printf("Time of Flight:%.2f", T);

    return 0;


}
